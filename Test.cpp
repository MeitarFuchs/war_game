//#include "doctest.h"
//#include "DemoGame.hpp"
//#include "FootSoldier.hpp"
//#include "FootCommander.hpp"
//#include "Sniper.hpp"
//#include "SniperCommander.hpp"
//#include "Paramedic.hpp"
//#include "ParamedicCommander.hpp"
//
//WarGame::Board built1Board(){
//    WarGame::Board bordG(6,6);
//    bordG[{3,0}]= new FootSoldier(2);
//    bordG[{2,2}]= new FootSoldier(1);
//    bordG[{5,2}]= new FootCommander(2);
//    bordG[{0,5}]= new FootCommander(1);
//
//    bordG[{0,1}]= new Paramedic(2);
//    bordG[{4,3}]= new Paramedic(1);
//    bordG[{0,4}]= new ParamedicCommander(2);
//    bordG[{4,0}]= new ParamedicCommander(1);
//
//    bordG[{1,1}]= new Sniper(2);
//    bordG[{3,2}]= new Sniper(1);
//    bordG[{1,3}]= new SniperCommander(2);
//    bordG[{5,4}]= new SniperCommander(1);
//    return bordG;
//}
//
//
//WarGame::Board built2Board(){
//    WarGame::Board bordG(6,6);
//    bordG[{1,0}]= new FootSoldier(2);
//    bordG[{0,2}]= new FootSoldier(1);
//    bordG[{4,2}]= new FootCommander(2);
//    bordG[{5,5}]= new FootCommander(1);
//
//    bordG[{1,1}]= new Paramedic(2);
//    bordG[{5,3}]= new Paramedic(1);
//    bordG[{4,0}]= new ParamedicCommander(2);
//    bordG[{0,4}]= new ParamedicCommander(1);
//
//    bordG[{3,1}]= new Sniper(2);
//    bordG[{0,5}]= new Sniper(1);
//    bordG[{3,2}]= new SniperCommander(2);
//    bordG[{3,5}]= new SniperCommander(1);
//    return bordG;
//}
//
//
//TEST_CASE("add player to bord"){
//
//    WarGame::Board bordG = built1Board();
//    CHECK(bordG.has_soldiers(2));
//    CHECK(bordG.has_soldiers(1));
//    CHECK(typeid(bordG[{0,1}]) == typeid(Paramedic));
//    CHECK(typeid(bordG[{0,4}]) == typeid(ParamedicCommander));
//    CHECK(typeid(bordG[{0,5}]) == typeid(FootCommander));
//    CHECK(typeid(bordG[{1,1}]) == typeid(Sniper));
//    CHECK(typeid(bordG[{1,3}]) == typeid(SniperCommander));
//    CHECK(typeid(bordG[{2,2}]) == typeid(FootSoldier));
//    CHECK(typeid(bordG[{3,0}]) == typeid(FootSoldier));
//    CHECK(typeid(bordG[{3,2}]) == typeid(Sniper));
//    CHECK(typeid(bordG[{4,0}]) == typeid(ParamedicCommander));
//    CHECK(typeid(bordG[{4,3}]) == typeid(Paramedic));
//    CHECK(typeid(bordG[{5,2}]) == typeid(FootCommander));
//    CHECK(typeid(bordG[{5,4}]) == typeid(SniperCommander));
//
//    WarGame::Board bordG1(2,2);
//    CHECK_FALSE(bordG1.has_soldiers(2));
//    CHECK_FALSE(bordG1.has_soldiers(1));
//}
//
//
//TEST_CASE("add player to bord"){
//
//    WarGame::Board bordG = built2Board();
//            CHECK(bordG.has_soldiers(2));
//            CHECK(bordG.has_soldiers(1));
//
//            CHECK(typeid(bordG[{0,2}]) == typeid(FootSoldier));
//            CHECK(typeid(bordG[{0,4}]) == typeid(ParamedicCommander));
//            CHECK(typeid(bordG[{0,5}]) == typeid(Sniper));
//            CHECK(typeid(bordG[{1,0}]) == typeid(FootSoldier));
//            CHECK(typeid(bordG[{1,1}]) == typeid(Paramedic));
//            CHECK(typeid(bordG[{3,1}]) == typeid(Sniper));
//            CHECK(typeid(bordG[{3,2}]) == typeid(SniperCommander));
//    CHECK(typeid(bordG[{3,5}]) == typeid(SniperCommander));
//CHECK(typeid(bordG[{4,0}]) == typeid(ParamedicCommander));
//CHECK(typeid(bordG[{4,2}]) == typeid(FootCommander));
//CHECK(typeid(bordG[{5,3}]) == typeid(Paramedic));
//CHECK(typeid(bordG[{5,5}]) == typeid(FootCommander));
//
//WarGame::Board bordG1(4,4);
//CHECK_FALSE(bordG1.has_soldiers(2));
//CHECK_FALSE(bordG1.has_soldiers(1));
//}
//
//
//TEST_CASE("Move the no commender solider") {
//    WarGame::Board bordG = built1Board();
//    bordG.move(2, {0,1}, WarGame::Board::Right);
//            CHECK(bordG[{0,1}] == nullptr);
//            CHECK(typeid(bordG[{0,2}]) == typeid(Paramedic));
//            CHECK(bordG[{0,2}]->healthPoints==100);
//
//    bordG.move(1, {2,2}, WarGame::Board::Down);
//            CHECK(bordG[{2,2}] == nullptr);
//            CHECK(typeid(bordG[{1,2}]) == typeid(FootSoldier));
//            CHECK(bordG[{1,2}]->healthPoints==100);
//
//    bordG.move(2, {1,1}, WarGame::Board::Up);
//            CHECK(bordG[{1,1}] == nullptr);
//            CHECK(typeid(bordG[{2,1}]) == typeid(Sniper));
//            CHECK(bordG[{2,1}]->healthPoints==100);
//
//    bordG.move(1, {3,2}, WarGame::Board::Right);
//            CHECK(bordG[{3,2}] == nullptr);
//            CHECK(typeid(bordG[{3,3}]) == typeid(Sniper));
//            CHECK(bordG[{3,3}]->healthPoints==100);
//
//    bordG.move(2, {3,0}, WarGame::Board::Down);
//            CHECK(bordG[{3,0}] == nullptr);
//            CHECK(typeid(bordG[{2,0}]) == typeid(FootSoldier));
//            CHECK(bordG[{2,0}]->healthPoints==100);
//
//    bordG.move(1, {4,3}, WarGame::Board::Left);
//            CHECK(bordG[{4,3}] == nullptr);
//            CHECK(typeid(bordG[{4,2}]) == typeid(Paramedic));
//            CHECK(bordG[{4,2}]->healthPoints==100);
//}
//
//
//TEST_CASE("Move the no commender solider from bord 2") {
//    WarGame::Board bordG = built2Board();
//    bordG.move(2, {3,1}, WarGame::Board::Left);
//            CHECK(bordG[{3,1}] == nullptr);
//            CHECK(typeid(bordG[{3,0}]) == typeid(Sniper));
//            CHECK(bordG[{3,0}]->healthPoints==100);
//
//    bordG.move(1, {5,3}, WarGame::Board::Down);
//            CHECK(bordG[{5,3}] == nullptr);
//            CHECK(typeid(bordG[{4,3}]) == typeid(Paramedic));
//            CHECK(bordG[{4,3}]->healthPoints==100);
//
//    bordG.move(2, {1,1}, WarGame::Board::Right);
//            CHECK(bordG[{1,1}] == nullptr);
//            CHECK(typeid(bordG[{1,2}]) == typeid(Paramedic));
//            CHECK(bordG[{1,2}]->healthPoints==100);
//
//    bordG.move(1, {0,2}, WarGame::Board::Left);
//            CHECK(bordG[{0,2}] == nullptr);
//            CHECK(typeid(bordG[{0,1}]) == typeid(FootSoldier));
//            CHECK(bordG[{0,1}]->healthPoints==100);
//
//    bordG.move(2, {1,0}, WarGame::Board::Up);
//            CHECK(bordG[{1,0}] == nullptr);
//            CHECK(typeid(bordG[{2,0}]) == typeid(FootSoldier));
//            CHECK(bordG[{2,0}]->healthPoints==100);
//
//    bordG.move(1, {0,5}, WarGame::Board::Up);
//            CHECK(bordG[{0,5}] == nullptr);
//            CHECK(typeid(bordG[{1,5}]) == typeid(Sniper));
//            CHECK(bordG[{1,5}]->healthPoints==100);
//}
//
//
//TEST_CASE("try to move to a wrong place-Exceptions") {
//    WarGame::Board bordG = built1Board();
//    //Out of board
//    CHECK_THROWS(bordG.move(2,{0,1}, WarGame::Board::Down));
//    CHECK_THROWS(bordG.move(2,{0,4}, WarGame::Board::Down));
//    CHECK_THROWS(bordG.move(1,{0,5}, WarGame::Board::Down));
//    CHECK_THROWS(bordG.move(2,{3,0}, WarGame::Board::Left));
//    CHECK_THROWS(bordG.move(1,{4,0}, WarGame::Board::Left));
//    CHECK_THROWS(bordG.move(2,{5,2}, WarGame::Board::Up));
//    CHECK_THROWS(bordG.move(1,{5,4}, WarGame::Board::Up));
//
//    //Busy place
//    CHECK_THROWS(bordG.move(2,{0,1}, WarGame::Board::Up));
//    CHECK_THROWS(bordG.move(2,{0,4}, WarGame::Board::Right));
//    CHECK_THROWS(bordG.move(1,{0,5}, WarGame::Board::Left));
//    CHECK_THROWS(bordG.move(2,{3,0}, WarGame::Board::Up));
//    CHECK_THROWS(bordG.move(1,{4,0}, WarGame::Board::Down));
//
//    //Source out of bound
//    CHECK_THROWS(bordG.move(2,{6,7}, WarGame::Board::Up));
//    CHECK_THROWS(bordG.move(2,{4,6}, WarGame::Board::Up));
//    CHECK_THROWS(bordG.move(2,{10,7}, WarGame::Board::Right));
//    CHECK_THROWS(bordG.move(2,{13,7}, WarGame::Board::Down));
//    CHECK_THROWS(bordG.move(1,{7,4}, WarGame::Board::Right));
//    CHECK_THROWS(bordG.move(1,{12,10}, WarGame::Board::Left));
//    CHECK_THROWS(bordG.move(1,{1,10}, WarGame::Board::Left));
//    CHECK_THROWS(bordG.move(1,{12,7}, WarGame::Board::Down));
//}
//
//TEST_CASE("try to move to a wrong place-Exceptions-- in board 2") {
//    WarGame::Board bordG = built2Board();
//    //Out of board
//    CHECK_THROWS(bordG.move(1,{0,2}, WarGame::Board::Down));
//    CHECK_THROWS(bordG.move(1,{0,4}, WarGame::Board::Down));
//    CHECK_THROWS(bordG.move(1,{0,5}, WarGame::Board::Down));
//    CHECK_THROWS(bordG.move(2,{1,0}, WarGame::Board::Left));
//    CHECK_THROWS(bordG.move(1,{3,5}, WarGame::Board::Right));
//    CHECK_THROWS(bordG.move(2,{4,0}, WarGame::Board::Left));
//    CHECK_THROWS(bordG.move(1,{5,3}, WarGame::Board::Up));
//    CHECK_THROWS(bordG.move(1,{5,5}, WarGame::Board::Right));
//    CHECK_THROWS(bordG.move(1,{5,5}, WarGame::Board::Up));
//
//    //Busy place
//    CHECK_THROWS(bordG.move(2,{1,0}, WarGame::Board::Right));
//    CHECK_THROWS(bordG.move(1,{0,4}, WarGame::Board::Right));
//    CHECK_THROWS(bordG.move(1,{0,5}, WarGame::Board::Left));
//    CHECK_THROWS(bordG.move(2,{1,1}, WarGame::Board::Left));
//    CHECK_THROWS(bordG.move(2,{3,1}, WarGame::Board::Right));
//    CHECK_THROWS(bordG.move(2,{3,2}, WarGame::Board::Left));
//
//    //Source out of bound
//    CHECK_THROWS(bordG.move(2,{6,7}, WarGame::Board::Up));
//    CHECK_THROWS(bordG.move(2,{12,6}, WarGame::Board::Up));
//    CHECK_THROWS(bordG.move(2,{11,7}, WarGame::Board::Right));
//    CHECK_THROWS(bordG.move(2,{19,7}, WarGame::Board::Down));
//    CHECK_THROWS(bordG.move(1,{12,4}, WarGame::Board::Right));
//    CHECK_THROWS(bordG.move(1,{10,10}, WarGame::Board::Left));
//    CHECK_THROWS(bordG.move(1,{11,10}, WarGame::Board::Left));
//    CHECK_THROWS(bordG.move(1,{2,7}, WarGame::Board::Down));
//}
//
//


#include "doctest.h"
#include "Board.hpp"
#include "FootCommander.hpp"
#include "FootSoldier.hpp"

#include <string>
#include <iostream>
using namespace std;
using namespace WarGame;

TEST_CASE("stopid tests") {
    WarGame::Board board(6, 6);
    CHECK_THROWS_AS(!board.has_soldiers(1), std::exception);
    CHECK_THROWS_AS(!board.has_soldiers(2), std::exception);
    CHECK_THROWS_AS(!board.has_soldiers(1), std::exception);
    CHECK_THROWS_AS(!board.has_soldiers(2), std::exception);

    // Adding players for team 1
    board[{1, 1}] = new FootSoldier(1);
    CHECK(board.has_soldiers(1) == true);
    board[{3, 3}] = new FootCommander(1);
    CHECK(board.has_soldiers(1) == true);
    board[{5, 5}] = new FootSoldier(1);
    CHECK(board.has_soldiers(1) == true);

    // Adding players for team 2

    CHECK(!board.has_soldiers(2) == false);
    CHECK(!board.has_soldiers(2) == false);
    board[{4, 1}] = new FootSoldier(2);
    board[{4, 2}] = new FootSoldier(2);
    board[{4, 3}] = new FootSoldier(2);
    CHECK_THROWS_AS(board.move(2, {0, 0}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {5, 5}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {0, 0}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {5, 5}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {0, 0}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {5, 5}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {0, 0}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {5, 5}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {0, 0}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {5, 5}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {0, 0}, Board::MoveDIR::Down), std::invalid_argument);
    CHECK_THROWS_AS(board.move(2, {5, 5}, Board::MoveDIR::Down), std::invalid_argument);


            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);
            CHECK(board.has_soldiers(1) == true);

            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
            CHECK(board.has_soldiers(2) == true);
}