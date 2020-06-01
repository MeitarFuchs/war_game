//
// Created by meitarfuchs on 20/05/2020.
//

#include "FootCommander.hpp"

std::pair<int,int> FootCommander::closeToAttack (std::pair<int,int> src,const std::vector<std::vector<Soldier*>>& board)
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
                if(dis<min)
                {
                    closer=distance;
                    dst.first=i;
                    dst.second=j;
                }
            }
        }
    }
    return dst;
}

void FootCommander::act(std::pair<int,int> src,std::vector<std::vector<Soldier*>> board)
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

    int team= src->teamPlayer;

    allFootSoldierAct(team,src,board);
}


void FootCommander::allFootSoldierAct(int team,std::pair<int,int> src, std::vector<std::vector<Soldier*>> board)
{
    for(int i=0; i<board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            FootSoldier* f=ststic_cast<FootSoldier*>(board[i][j]);
            if ((board[i][j]!=nullptr)&&(board[i][j]->teamPlayer==team)&&(board[i][j]!=src)&&( f!= nullptr)) {
                act(board[i][j],board);
            }
        }
    }
}
