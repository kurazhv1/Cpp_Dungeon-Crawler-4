//
// Created by hedi on 24/11/22.
//
#include "gtest/gtest.h"
#include "../src/header.hpp"
#include "../src/GameBlock.hpp"

TEST(Gameblocktest, GetSet) {
    GameBlock testblock({0,0},1,ItemType);

    PosType OneOne{1,1};
    PosType blockPosGet = testblock.Get_Pos();
    EXPECT_TRUE(OneOne.pos_x != blockPosGet.pos_x);
    EXPECT_TRUE(OneOne.pos_y != blockPosGet.pos_y);
    EXPECT_TRUE(0 != testblock.Get_Speed());
    EXPECT_TRUE(MonsterType != testblock.Get_Type());

    testblock.Set_pos(OneOne);
    PosType blockPosSet = testblock.Get_Pos();
    EXPECT_TRUE(OneOne.pos_x == blockPosSet.pos_x);
    EXPECT_TRUE(OneOne.pos_y == blockPosSet.pos_y);
    EXPECT_TRUE(1 == testblock.Get_Speed());
    EXPECT_TRUE(ItemType == testblock.Get_Type());
}