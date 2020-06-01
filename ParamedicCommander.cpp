//
// Created by meitarfuchs on 20/05/2020.
//

#include "ParamedicCommander.hpp"


void ParamedicCommander::act(std::pair<int,int> src,std::vector<std::vector<Soldier*>> board)
{
    int team= -1;
    double player= std::numeric_limits<double>::max();//999999999

    if( board[src.first][src.second]->teamPlayer==1 ) //paramedic team
        team=2;
    else
        team=1;
    for(int i=src.first-1; i=<src.first+1; i++)
    {
        for (int j = src.second - 1; j =<src.second + 1; j++)
        {
            if ((board[i][j] != nullptr) && (board[i][j]->teamPlayer == team))
                maxHealthPoints(board[i][j]);
        }
    }

    int team= src->teamPlayer;

    allParmedicAct(team,src,board);

}

void ParamedicCommander::maxHealthPoints(std::pair<int,int> src)
{
    src->healthPoints=MAX_HEALTH_POINTS;
}

void ParamedicCommander::allParmedicAct(int team,std::pair<int,int> src,std::vector<std::vector<Soldier*>> board)
{
    for(int i=0; i<board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            Paramedic* p=ststic_cast<Paramedic*>(board[i][j]);
            if ((board[i][j]!=nullptr)&&(board[i][j]->teamPlayer==team)&&(board[i][j]!=src)&&( p!= nullptr)) {
                act(board[i][j],board);
            }
        }
    }
}




