
#include "Soldier.hpp"

class SniperCommander : public Soldier{
public:
    SniperCommander(int num):Soldier(120,100,num){}
    void action(std::pair<int,int> source,std::vector<std::vector<Soldier*>> board) override{}
};