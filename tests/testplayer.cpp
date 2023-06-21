//
// Created by hedi on 25/11/22.
//
#include "gtest/gtest.h"
#include "../src/Player.hpp"
#include "../src/Potion.hpp"
#include "../src/Weapon.hpp"
#include "../src/Monster.hpp"

TEST(Playertest, PlayerGetSet) {
    Player PlayerTest1 = Player({10,9},"TestBoi",13,10);

//    Name test
    EXPECT_EQ("TestBoi",PlayerTest1.getName());

//    HP test
    EXPECT_EQ(13,PlayerTest1.getHp());
    EXPECT_NE(10,PlayerTest1.getHp());
    PlayerTest1.ChangeHp(14);
    EXPECT_EQ(27,PlayerTest1.getHp());
    PlayerTest1.ChangeHp(-3);
    EXPECT_EQ(24,PlayerTest1.getHp());

//    Attack test
    EXPECT_NE(13,PlayerTest1.getAttackPoint());
    EXPECT_EQ(10,PlayerTest1.getAttackPoint());
    PlayerTest1.setAttackPoint(14);
    EXPECT_EQ(14,PlayerTest1.getAttackPoint());
    PlayerTest1.setAttackPoint(26);
    EXPECT_EQ(26,PlayerTest1.getAttackPoint());

//    Win and loss test
    EXPECT_FALSE(PlayerTest1.isWin());
    EXPECT_FALSE(PlayerTest1.isLoss());
    PlayerTest1.Setloss();
    PlayerTest1.Setwin();
    EXPECT_TRUE(PlayerTest1.isWin());
    EXPECT_TRUE(PlayerTest1.isLoss());

//    Move test
    EXPECT_EQ(10,PlayerTest1.Get_Pos().pos_x);
    EXPECT_EQ(9,PlayerTest1.Get_Pos().pos_y);
    PlayerTest1.Move({14,4});
    EXPECT_EQ(14,PlayerTest1.Get_Pos().pos_x);
    EXPECT_EQ(4,PlayerTest1.Get_Pos().pos_y);

}

TEST(Playertest, PlayerMove) {
   Player PlayerTest1 = Player({10,9},"TestBoi",13,10);

//    Move test
    EXPECT_EQ(10,PlayerTest1.Get_Pos().pos_x);
    EXPECT_EQ(9,PlayerTest1.Get_Pos().pos_y);
    PlayerTest1.Move({14,4});
    EXPECT_EQ(14,PlayerTest1.Get_Pos().pos_x);
    EXPECT_EQ(4,PlayerTest1.Get_Pos().pos_y);

//    Next Pos test
//    UP
    EXPECT_EQ(15,PlayerTest1.NextPos(UP).pos_x);
    EXPECT_EQ(4,PlayerTest1.NextPos(UP).pos_y);
//    DOWN
    EXPECT_EQ(13,PlayerTest1.NextPos(DOWN).pos_x);
    EXPECT_EQ(4,PlayerTest1.NextPos(DOWN).pos_y);
//    RIGHT
    EXPECT_EQ(14,PlayerTest1.NextPos(RIGHT).pos_x);
    EXPECT_EQ(5,PlayerTest1.NextPos(RIGHT).pos_y);
//    LEFT
    EXPECT_EQ(14,PlayerTest1.NextPos(LEFT).pos_x);
    EXPECT_EQ(3,PlayerTest1.NextPos(LEFT).pos_y);
//    NONE
    EXPECT_EQ(14,PlayerTest1.NextPos(NONE).pos_x);
    EXPECT_EQ(4,PlayerTest1.NextPos(NONE).pos_y);

}


TEST(Playertest, PLayerItem) {
    std::shared_ptr<Item> PotTest1(new Potion(10,{1,4},"HealthPot"));

    std::shared_ptr<Item> WeapTest1(new Weapon(27,{1,4},"Weapon"));
    Player PlayerTest1 = Player({10,9},"TestBoi",13,10);

    PlayerTest1.UseItem();
    EXPECT_EQ(13,PlayerTest1.getHp());
    EXPECT_EQ(10,PlayerTest1.getAttackPoint());

    PlayerTest1.PickUpItem(PotTest1);
    PlayerTest1.UseItem();
    EXPECT_NE(13,PlayerTest1.getHp());
    EXPECT_EQ(23,PlayerTest1.getHp());
    EXPECT_EQ(10,PlayerTest1.getAttackPoint());

    PlayerTest1.PickUpItem(WeapTest1);
    PlayerTest1.UseItem();
    EXPECT_EQ(23,PlayerTest1.getHp());
    EXPECT_NE(10,PlayerTest1.getAttackPoint());
    EXPECT_EQ(27,PlayerTest1.getAttackPoint());

    //HP:23, At:27
    std::shared_ptr<Item> PotTest2(new Potion(4,{1,4},"HealthPot"));
    std::shared_ptr<Item> WeapTest2(new Weapon(14,{1,4},"Weapon"));
    PlayerTest1.PickUpItem(PotTest2);
    PlayerTest1.PickUpItem(WeapTest2);
    PlayerTest1.nextItem();
    PlayerTest1.UseItem();
    EXPECT_EQ(23,PlayerTest1.getHp());
    EXPECT_EQ(14,PlayerTest1.getAttackPoint());

    PlayerTest1.nextItem();
    PlayerTest1.UseItem();
    EXPECT_EQ(27,PlayerTest1.getHp());
    EXPECT_EQ(14,PlayerTest1.getAttackPoint());

    auto itemvectortest1 = PlayerTest1.getItemInventory();
    EXPECT_TRUE(itemvectortest1.empty());

    PlayerTest1.PickUpItem(PotTest2);
    auto itemvectortest2 = PlayerTest1.getItemInventory();
    EXPECT_FALSE(itemvectortest2.empty());



}

TEST(Playertest, PlayerAttack) {
    Monster Monstertest1 = Monster({20,6},4,"TestMonster",20,4);
    Player PlayerTest1 = Player({10,9},"TestBoi",13,10);

    EXPECT_EQ(20,Monstertest1.getHp());
    EXPECT_FALSE(PlayerTest1.Attack(Monstertest1));
    EXPECT_EQ(10,Monstertest1.getHp());
    EXPECT_TRUE(PlayerTest1.Attack(Monstertest1));
    EXPECT_EQ(0,Monstertest1.getHp());

    Monster Monstertest2 = Monster({20,6},4,"TestMonster",4,4);
    Player PlayerTest2 = Player({10,9},"TestBoi",13,10);
    EXPECT_EQ(4,Monstertest2.getHp());
    EXPECT_TRUE(PlayerTest2.Attack(Monstertest2));
    EXPECT_EQ(-6,Monstertest2.getHp());
}