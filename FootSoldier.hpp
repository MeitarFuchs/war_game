
#include "Soldier.hpp"
#define MAX_HEALTH_POINTS=100;

class FootSoldier : public Soldier{
public:
    FootSoldier(int num):Soldier(100,10,num){}

    std::pair<int,int> closeToAttack (std::pair<int,int> src,const std::vector<std::vector<Soldier*>>& board);
    void act(std::pair<int,int> source,std::vector<std::vector<Soldier*>> board) override ;
};