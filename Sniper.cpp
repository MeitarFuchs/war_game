
#include "Sniper.hpp"

std::pair<int,int> Sniper::closeToAttack (std::pair<int,int> src,const std::vector<std::vector<Soldier*>>& board)
{
    int maxHP=-1;
    int temp;
    int teamAttack= -1;
    std::pair<int,int> dst;

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
                temp= board[i][j]->healthPoints;
                if(temp>maxHP)
                {
                    maxHP=temp;
                   dst.first=i;
                   dst.second=j;
                }
            }
        }
    }
    return dst;
}


void Sniper::act(std::pair<int,int> src,std::vector<std::vector<Soldier*>> board)
{
    int leftLife;
    int damage;
    std::pair<int,int> playerToAttack= this->closeToAttack(src,board);

    leftLife= board[playerToAttack.first][playerToAttack.second]-> healthPoints;
    damage= board[src.first][src.second]-> damagePA;

    board[playerToAttack.first][playerToAttack.second]->healthPoints= leftLife-damage; //set the life points

    if(board[toAttack.first][toAttack.second]->healthPoints <= 0) //check if the player need to died
    {
        delete board[playerToAttack.first][playerToAttack.second];
        board[playerToAttack.first][playerToAttack.second]= nullptr;
    }
}
