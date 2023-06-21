#include "Player.hpp"
#include "Monster.hpp"
#include "Item.hpp"



Player::Player(PosType pos, const std::string &name, int HP, int AttackPoint):GameBlock(pos,1,PlayerType),name_(name),HP_(HP),AttackPoint_(AttackPoint),Win_(0),Loss_(0){
     if(!_Texture.loadFromFile(imagespath+"/hero.png")){
            //return false;
        }
        _Texture.setSmooth(true);
        _Sprite.setTexture(_Texture);
        _Sprite.setTextureRect(sf::IntRect(0,0,50,50));
}

const std::string Player::getName() const {
    return name_;
}

int Player::getHp() const {
    return HP_;
}

int Player::getAttackPoint() const {
    return AttackPoint_;
}

void Player::ChangeHp(int hp) {
    HP_ += hp;
}

void Player::setAttackPoint(int AttackPt) {
    AttackPoint_ = AttackPt;
}

bool Player::Attack(Monster &m) {
   m.ChangeHp(-AttackPoint_);
   if(m.getHp() <= 0){
       return true;
   }
   return false;
}

void Player::Move(PosType newpos) {
    this->Set_pos(newpos);
}

PosType Player::NextPos(DirectionType d) {
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



void Player::UseItem() {
   if(this->ItemInventory_.empty() != 1){
       this->ItemInventory_[0]->UseItem(*this);
       ItemInventory_.erase(ItemInventory_.begin());
   }
}

const std::vector<std::shared_ptr<Item> > &Player::getItemInventory() const {
   return ItemInventory_;
}

void Player::PickUpItem(std::shared_ptr<Item> ItemToPick) {
   this->ItemInventory_.push_back(ItemToPick);
}

void Player::nextItem() {
    if(this->ItemInventory_.empty() != 1){
        std::shared_ptr<Item> FirstItem = ItemInventory_.front();
        ItemInventory_.erase(ItemInventory_.begin());
        ItemInventory_.push_back(FirstItem);
    }
}

bool Player::isWin() const {
    return Win_;
}

bool Player::isLoss() const {
    return Loss_;
}

void Player::Setloss(){
    Loss_=true;
}
void Player::Setwin(){
    Win_=true;
}





