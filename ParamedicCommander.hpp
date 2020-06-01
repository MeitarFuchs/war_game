
#include "Soldier.hpp"
#include <iostream>
#include <typeinfo>
#define MAX_HEALTH_POINTS 200;

class ParamedicCommander : public Soldier{
public:
    ParamedicCommander(int num):Soldier(200,999,num){}

    void act(std::pair<int,int> source,std::vector<std::vector<Soldier*>>board) override ;
    void maxHealthPoints(std::pair<int,int> source);
    void allParmedicAct(int team,std::pair<int,int> src,std::vector<std::vector<Soldier*>> board);

};