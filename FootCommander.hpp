
#include "Soldier.hpp"
#include <cmath>
#include <iostream>
#define MAX_HEALTH_POINTS 150;
class FootCommander : public Soldier{
public:
    FootCommander(int num):Soldier(150,20,num){}

    void act(std::pair<int,int> src,std::vector<std::vector<Soldier*>> board) override;
    std::pair<int,int> closeToAttack (std::pair<int,int> src,const std::vector<std::vector<Soldier*>>& board) override ;
    void allFootSoldierAct(int team,std::pair<int,int> src,std::vector<std::vector<Soldier*>> board);

};