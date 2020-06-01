#pragma once
#include <string>
#include <vector>

using namespace std;

static int team1=0;
static int team2=0;

class Soldier{

    public:
        int healthPoints=0;
        int damagePA=0;
        int teamPlayer=-1;


        Soldier(int hp, int dpa, int tp):  healthPoints(hp), damagePA(dpa), teamPlayer(tp)
        {
            if (tp==1) team1++;
            else team2++;
//            healthPoints=hp; damagePA=dpa; teamPlayer=tp;
        }

        virtual void act(std::pair<int,int> src,std::vector<std::vector<Soldier*>> board)=0;

        virtual std::pair<int,int> closeToAttack (std::pair<int,int> src,const std::vector<std::vector<Soldier*>>& board)=0;

        virtual ~Soldier()
        {
            if(teamPlayer==1) team1--;
            if(teamPlayer==2) team2--;
        }

};
