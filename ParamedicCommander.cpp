#include "ParamedicCommander.hpp"
#include "Paramedic.hpp"



void ParamedicCommander::act(std::pair<int,int> src,std::vector<std::vector<Soldier*>> board)
{
    int team= -1;
    double player= std::numeric_limits<double>::max();//999999999

    if( board[src.first][src.second]->teamPlayer==1 ) //paramedic team
        team=2;
    else
        team=1;
    for(int i=src.first-1; i<=src.first+1; i++)
    {
        for (int j = src.second - 1; j <=src.second + 1; j++)
        {
            if ((board[i][j] != nullptr) && (board[i][j]->teamPlayer == team)) {
                std::pair<int,int> loc;
                loc.first=i;
                loc.second=j;
                maxHealthPoints(loc);
            }
        }
    }

    allParmedicAct(team,src,board);

}

void ParamedicCommander::maxHealthPoints(std::pair<int,int> src)
{
    this->healthPoints=MAX_HEALTH_POINTS;
}

void ParamedicCommander::allParmedicAct(int team,std::pair<int,int> src,std::vector<std::vector<Soldier*>> board)
{
    for(int i=0; i<board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            Paramedic* p=static_cast<Paramedic*>(board[i][j]);
            if ((board[i][j]!=nullptr)&&(board[i][j]->teamPlayer==team)&&( p!= nullptr)) {
                std::pair<int,int> loc;
                loc.first=i;
                loc.second=j;
                act(loc,board);
            }
        }
    }
}




