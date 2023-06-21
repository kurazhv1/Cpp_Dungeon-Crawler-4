#include "GameBlock.hpp"
#include "iostream"
#include <iostream>
GameBlock::GameBlock(PosType pos,int speed, BlockType type):_pos(pos),_speed(speed),_type(type){
    _pos=pos;
    std::cout<<"("<<_pos.pos_x*50<<","<<_pos.pos_y*50<<"),"<<_type<<std::endl;
    _Sprite.setPosition((_pos.pos_y*50),(_pos.pos_x*50));
}

PosType GameBlock::Get_Pos() const{
    return _pos;
}

int GameBlock::Get_Speed() const{
    return _speed;
}

BlockType GameBlock::Get_Type() const{
    return _type;
}

void GameBlock::Set_pos(PosType& pos){
    _pos=pos;
}
