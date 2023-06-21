//
// Created by hedi on 24/11/22.
//
#include "gtest/gtest.h"
#include "../src/header.hpp"



TEST(PosTypeTest, AddSub) {
    PosType a{0,0};
    EXPECT_EQ (0, a.pos_x);
    EXPECT_EQ (0, a.pos_y);
    a.pos_y++;
    EXPECT_EQ (0, a.pos_x);
    EXPECT_EQ (1, a.pos_y);
    a.pos_x++;
    EXPECT_EQ (1, a.pos_x);
    EXPECT_EQ (1, a.pos_y);
    a.pos_y += 10;
    a.pos_x += 10;
    EXPECT_EQ (11, a.pos_x);
    EXPECT_EQ (11, a.pos_y);
    a.pos_y--;
    a.pos_x--;
    EXPECT_EQ (10, a.pos_x);
    EXPECT_EQ (10, a.pos_y);
}