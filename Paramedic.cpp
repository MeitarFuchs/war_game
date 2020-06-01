
#include "Paramedic.hpp"

void Paramedic::act(std::pair<int,int> src,std::vector<std::vector<Soldier*>> board)
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
}

void Paramedic::maxHealthPoints(std::pair<int,int> src)
{
    src->healthPoints=MAX_HEALTH_POINTS;
}
