
#include "Soldier.hpp"

class FootCommander : public Soldier{
public:
    FootCommander(int num):Soldier(150,20,num){}
    void Soldier::action(std::pair<int,int> source,std::vector<std::vector<Soldier*>> board) override{}
};