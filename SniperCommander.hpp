
#include "Soldier.hpp"
#include "Sniper.hpp"
#include <iostream>
#define MAX_HEALTH_POINTS 120;

class SniperCommander : public Soldier{
public:
    SniperCommander(int num):Soldier(120,100,num){}

    void act(std::pair<int,int> source,std::vector<std::vector<Soldier*>> board) override ;
    std::pair<int,int> closeToAttack (std::pair<int,int> src,const std::vector<std::vector<Soldier*>>& board) override ;
    void allSniperAct(int team,std::pair<int,int> src,std::vector<std::vector<Soldier*>> board);

};