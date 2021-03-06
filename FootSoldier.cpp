//
// Created by meitarfuchs on 20/05/2020.
//
#include "FootSoldier.hpp"

std::pair<int,int> FootSoldier::closeToAttack (std::pair<int,int> src,const std::vector<std::vector<Soldier*>>& board)
{
    int dis=0;
    int teamAttack= -1;
    std::pair<int,int> dst;
    double closer= std::numeric_limits<double>::max();//999999999

    if( board[src.first][src.second]->teamPlayer==1 )
        teamAttack=2;
    else
        teamAttack=1;

    for(int i=0; i<board.size(); i++)
    {
        for(int j=0; j<board[i].size(); j++)
        {
            if( (board[i][j]!=nullptr) && (board[i][j]->teamPlayer==teamAttack))
            {
                dis= pow(src.first-i,2) + pow(src.second-j,2); //calculate the distance
                dis= sqrt(dis);
                if(dis<closer)
                {
                    closer=dis;
                    dst.first=i;
                    dst.second=j;
                }
            }
        }
    }
    return dst;
}

void FootSoldier::act(std::pair<int,int> src,std::vector<std::vector<Soldier*>> board)
{
    int leftLife;
    int damage;
    std::pair<int,int> playerToAttack= this->closeToAttack(src,board);

    leftLife= board[playerToAttack.first][playerToAttack.second]-> healthPoints;
    damage= board[src.first][src.second]-> damagePA;

    board[playerToAttack.first][playerToAttack.second]->healthPoints= leftLife-damage; //set the life points

    if(board[playerToAttack.first][playerToAttack.second]->healthPoints <= 0) //check if the player need to died
    {
        delete board[playerToAttack.first][playerToAttack.second];
        board[playerToAttack.first][playerToAttack.second]= nullptr;
    }
}
