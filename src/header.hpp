#ifndef HEADER_HPP
#define HEADER_HPP

struct PosType{
    int pos_x;
    int pos_y;
};

enum BlockType{
    RoadType,
    WallType,
    PlayerType,
    MonsterType,
    ItemType,
    GoalType,
};

enum ItemTypeEnum{
    PotionType,
    WeaponType
};

enum DirectionType{
    UP,
    DOWN,
    RIGHT,
    LEFT,
    NONE
};

const std::string imagespath = "images/";
const std::string mappath = "src/";
#endif