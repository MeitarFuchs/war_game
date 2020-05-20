//
// Created by meitarfuchs on 20/05/2020.
//

#ifndef WARGAME_PARAMEDICCOMMANDER_HPP
#define WARGAME_PARAMEDICCOMMANDER_HPP

#endif //WARGAME_PARAMEDICCOMMANDER_HPP

#include "Soldier.hpp"

class ParamedicCommander : public Soldier{
public:
    ParamedicCommander(int num):Soldier(200,999,num){}
    void action(std::pair<int,int> source,std::vector<std::vector<Soldier*>> board) override{}
};