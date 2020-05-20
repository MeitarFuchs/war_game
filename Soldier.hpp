#pragma once
#include <string>
#include <vector>

using namespace std;

class Soldier{

    public:
        int healthPoints=0;
        int damagePA=0;
        int teamPlayer=-1;

        Soldier(int hp, int dpa, int tp)
        {
            healthPoints=hp;
            damagePA=dpa;
            teamPlayer=tp;
        }

    public:
        virtual void action(std::pair<int,int> source,std::vector<std::vector<Soldier*>> board)=0;

};
