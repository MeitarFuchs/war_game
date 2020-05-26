//
// Created by meitarfuchs on 20/05/2020.
//

#ifndef WARGAME_PARAMEDIC_HPP
#define WARGAME_PARAMEDIC_HPP

#endif //WARGAME_PARAMEDIC_HPP


#include "Soldier.hpp"

class Paramedic : public Soldier{
public:
    Paramedic(int num):Soldier(100,999,num){}
    void act(std::pair<int,int> source,std::vector<std::vector<Soldier*>> board) override {}

};