
#include "Soldier.hpp"
#define MAX_HEALTH_POINTS=100;

class Paramedic : public Soldier{
public:
    Paramedic(int num):Soldier(100,999,num){}

    void act(std::pair<int,int> src,std::vector<std::vector<Soldier*>> board) override ;
    void maxHealthPoints(std::pair<int,int> source);
};