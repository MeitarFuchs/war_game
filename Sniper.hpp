//
// Created by meitarfuchs on 20/05/2020.
//

#ifndef WARGAME_SNIPER_H
#define WARGAME_SNIPER_H

#endif //WARGAME_SNIPER_H

#include "Soldier.hpp"
#define MAX_HEALTH_POINTS 100;

class Sniper : public Soldier{
public:
    Sniper(int num):Soldier(100,50,num){}

    std::pair<int,int> closeToAttack (std::pair<int,int> src,const std::vector<std::vector<Soldier*>>& board) override ;
    void act(std::pair<int,int> source,std::vector<std::vector<Soldier*>> board) override ;
};