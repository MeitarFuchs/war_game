#include "Board.hpp"
#include <iostream>
using namespace std;


Soldier*& WarGame::Board::operator[](std::pair<int,int> location)
{return this->board[location.first][location.second];}

Soldier* WarGame::Board::operator[](std::pair<int,int> location) const
{return this->board[location.first][location.second];}

bool WarGame::Board::has_soldiers(uint player_number) const {
    for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j < this->cols; j++) {
            if ((board[i][j] != nullptr) && (board[i][j]->teamPlayer == player_number))
                return true;
        }
    }
    return false;
}

void WarGame::Board::move(uint player_number, std::pair<int,int> src, MoveDIR direction)
{
    Soldier* player= (*this)[src];

    if (player_number!= player->teamPlayer)
        throw std::invalid_argument("The player team in src is not correct!");
    else
        if (player == nullptr) throw std::invalid_argument("The src is nullptr!");
    else
    {
        std::pair<int,int> dst;
        if (direction==0) //Up
        {
            dst.first = src.first +1;
            dst.second = src.second;
        }
        if (direction==1) //Down
        {
            dst.first = src.first - 1;
            dst.second = src.second;
        }
        if (direction==2) //Right
        {
            dst.first = src.first;
            dst.second = src.second+1;
        }
        if (direction==3) //Left
        {
            dst.first = src.first;
            dst.second = src.second-1;
        }

        if (dst.first>=0 && dst.first<=this->rows && dst.second>=0 && dst.second<=this->cols)
        {// the dst is on the board- now we move the player
            (*this)[dst]=player;//move the player

            (*this)[src]=nullptr;

            player-> act(dst,board);//take an action
        }
        else
            throw std::invalid_argument("the dst is not in the board");

    }

}


