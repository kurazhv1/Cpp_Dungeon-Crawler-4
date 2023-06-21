//
// Created by hedi on 25/11/22.
//
#include "gtest/gtest.h"
#include "../src/Wall.hpp"
#include "../src/Road.hpp"
#include "../src/Goal.hpp"


TEST(Baseblocktest, WallTest){
    Wall Walltest = Wall({12,41});
    EXPECT_EQ(12,Walltest.Get_Pos().pos_x);
    EXPECT_EQ(41,Walltest.Get_Pos().pos_y);
}

TEST(Baseblocktest, GoalTest){
    Goal Goaltest = Goal({5,17});
    EXPECT_EQ(5,Goaltest.Get_Pos().pos_x);
    EXPECT_EQ(17,Goaltest.Get_Pos().pos_y);
}

TEST(Baseblocktest, RoadTest){
    Road RoadTest = Road({7,56});
    EXPECT_EQ(7,RoadTest.Get_Pos().pos_x);
    EXPECT_EQ(56,RoadTest.Get_Pos().pos_y);
}
