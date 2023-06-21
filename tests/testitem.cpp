//
// Created by hedi on 25/11/22.
//
#include "gtest/gtest.h"
#include "../src/Potion.hpp"
#include "../src/Weapon.hpp"
#include "../src/Player.hpp"


TEST(Itemtest, PotionTest) {

    Potion PotTest1 = Potion(10,{1,4},"HealthPot");
    EXPECT_EQ(0,PotTest1.Get_Speed());
    EXPECT_EQ(10,PotTest1.getHp());
    EXPECT_NE(9,PotTest1.getHp());

    Potion PotTest2 = Potion(24,{1,4},"HealthPot");
    EXPECT_EQ(0,PotTest2.Get_Speed());
    EXPECT_EQ(24,PotTest2.getHp());
    EXPECT_NE(23,PotTest2.getHp());
}

TEST(Itemtest, WeaponTest) {
    Weapon WeapTest1 = Weapon(10,{1,4},"Weapon");
    EXPECT_EQ(0,WeapTest1.Get_Speed());
    EXPECT_EQ(10,WeapTest1.getAttack());
    EXPECT_NE(9,WeapTest1.getAttack());

    Weapon WeapTest2 = Weapon(24,{1,4},"Weapon");
    EXPECT_EQ(0,WeapTest2.Get_Speed());
    EXPECT_EQ(24,WeapTest2.getAttack());
    EXPECT_NE(23,WeapTest2.getAttack());
}

TEST(Itemtest, Itemtest) {
    Potion PotTest1 = Potion(10,{1,4},"HealthPot");
    Weapon WeapTest1 = Weapon(22,{1,4},"Weapon");
    Player PlayerTest1 = Player({10,9},"Test",10,10);

    EXPECT_EQ(10,PlayerTest1.getHp());
    PotTest1.UseItem(PlayerTest1);
    EXPECT_EQ(20,PlayerTest1.getHp());

    EXPECT_EQ(10,PlayerTest1.getAttackPoint());
    WeapTest1.UseItem(PlayerTest1);
    EXPECT_EQ(22,PlayerTest1.getAttackPoint());
}