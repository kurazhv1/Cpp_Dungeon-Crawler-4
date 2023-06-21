//
// Created by hedi on 25/11/22.
//
#include "gtest/gtest.h"
#include "../src/Player.hpp"
#include "../src/Monster.hpp"

TEST(Monstertest, basicfunction) {
    Monster Monstertest1 = Monster({10,9},4,"TestMonster",13,10);

//    Name test
    EXPECT_EQ("TestMonster",Monstertest1.getName());

//    HP test
    EXPECT_EQ(13,Monstertest1.getHp());
    EXPECT_NE(10,Monstertest1.getHp());
    Monstertest1.ChangeHp(14);
    EXPECT_EQ(27,Monstertest1.getHp());
    Monstertest1.ChangeHp(-3);
    EXPECT_EQ(24,Monstertest1.getHp());

//    Move test
    EXPECT_EQ(10,Monstertest1.Get_Pos().pos_x);
    EXPECT_EQ(9,Monstertest1.Get_Pos().pos_y);
    Monstertest1.Move({14,4});
    EXPECT_EQ(14,Monstertest1.Get_Pos().pos_x);
    EXPECT_EQ(4,Monstertest1.Get_Pos().pos_y);
}

TEST(Monstertest, MonsterMove) {
    Monster Monstertest1 = Monster({10,9},4,"TestMonster",13,10);

    //    Move test
    EXPECT_EQ(10,Monstertest1.Get_Pos().pos_x);
    EXPECT_EQ(9,Monstertest1.Get_Pos().pos_y);
    Monstertest1.Move({14,4});
    EXPECT_EQ(14,Monstertest1.Get_Pos().pos_x);
    EXPECT_EQ(4,Monstertest1.Get_Pos().pos_y);

    //    Next Pos test
    //    UP
    EXPECT_EQ(15,Monstertest1.NextPos(UP).pos_x);
    EXPECT_EQ(4,Monstertest1.NextPos(UP).pos_y);
    //    DOWN
    EXPECT_EQ(13,Monstertest1.NextPos(DOWN).pos_x);
    EXPECT_EQ(4,Monstertest1.NextPos(DOWN).pos_y);
    //    RIGHT
    EXPECT_EQ(14,Monstertest1.NextPos(RIGHT).pos_x);
    EXPECT_EQ(5,Monstertest1.NextPos(RIGHT).pos_y);
    //    LEFT
    EXPECT_EQ(14,Monstertest1.NextPos(LEFT).pos_x);
    EXPECT_EQ(3,Monstertest1.NextPos(LEFT).pos_y);
    //    NONE
    EXPECT_EQ(14,Monstertest1.NextPos(NONE).pos_x);
    EXPECT_EQ(4,Monstertest1.NextPos(NONE).pos_y);

}

TEST(Monstertest, MonsterAttack) {
    Monster Monstertest1 = Monster({20,6},4,"TestMonster",20,7);
    Player PlayerTest1 = Player({10,9},"TestBoi",14,10);

    EXPECT_EQ(14,PlayerTest1.getHp());
    EXPECT_FALSE(Monstertest1.Attack(PlayerTest1));
    EXPECT_EQ(7,PlayerTest1.getHp());
    EXPECT_TRUE(Monstertest1.Attack(PlayerTest1));
    EXPECT_EQ(0,PlayerTest1.getHp());

    Monster Monstertest2 = Monster({20,6},4,"TestMonster",20,21);
    Player PlayerTest2 = Player({10,9},"TestBoi",14,10);
    EXPECT_EQ(14,PlayerTest2.getHp());
    EXPECT_TRUE(Monstertest2.Attack(PlayerTest2));
    EXPECT_EQ(-7,PlayerTest2.getHp());
}