//
// Created by meitarfuchs on 20/05/2020.
//

#ifndef WARGAME_FOOTSOLDIER_H
#define WARGAME_FOOTSOLDIER_H

#endif //WARGAME_FOOTSOLDIER_H


#include "Soldier.hpp"

class FootSoldier : public Soldier{
public:
    FootSoldier(int num):Soldier(100,10,num){}
    void Soldier::action(std::pair<int,int> source,std::vector<std::vector<Soldier*>> board) override{}
};