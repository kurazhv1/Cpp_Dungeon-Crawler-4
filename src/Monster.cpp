#include "Monster.hpp"
#include "Player.hpp"


Monster::Monster(const PosType &pos, int speed, const std::string &name, int hp, int attackPoint)
        : GameBlock(pos, speed, MonsterType), name_(name), HP_(hp), AttackPoint_(attackPoint) {
             if(!_Texture.loadFromFile(imagespath+"/monster.png")){
            //return false;
        }
        _Texture.setSmooth(true);
        _Sprite.setTexture(_Texture);
        _Sprite.setTextureRect(sf::IntRect(0,0,50,50));
        }

const std::string Monster::getName() const {
    return name_;
}

int Monster::getHp() const {
    return HP_;
}

void Monster::ChangeHp(int hp) {
    HP_ += hp;
}

void Monster::Move(PosType newpos) {
    this->Set_pos(newpos);
}

PosType Monster::NextPos(DirectionType d) {
    PosType newpos = this->_pos;
    switch(d){
        case UP:
            newpos.pos_x++;
            break;

        case DOWN:
            newpos.pos_x--;
            break;

        case RIGHT:
            newpos.pos_y++;
            break;

        case LEFT:
            newpos.pos_y--;
            break;
        default:
            break;
    }
    return newpos;
}

bool Monster::Attack(Player &p) {
   p.ChangeHp(-AttackPoint_);
   if(p.getHp() <= 0){
       return true;
   }
   return false;
}









