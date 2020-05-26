//
// Created by meitarfuchs on 20/05/2020.
//

#ifndef WARGAME_SNIPER_H
#define WARGAME_SNIPER_H

#endif //WARGAME_SNIPER_H

#include "Soldier.hpp"

class Sniper : public Soldier{
public:
    Sniper(int num):Soldier(100,50,num){}
    void act(std::pair<int,int> source,std::vector<std::vector<Soldier*>> board) override {}
};