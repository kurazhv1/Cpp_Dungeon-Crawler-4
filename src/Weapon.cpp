#include "Weapon.hpp"
#include "Player.hpp"


Weapon::Weapon(int Attack, PosType pos, const std::string &name): Item(pos,name,WeaponType), Attack_(Attack) {
    if(!_Texture.loadFromFile(imagespath+"/sword.png")){
            //return false;
        }
        _Texture.setSmooth(true);
        _Sprite.setTexture(_Texture);
        _Sprite.setTextureRect(sf::IntRect(0,0,50,50));
}

void Weapon::UseItem(Player& player) {
    player.setAttackPoint(Attack_);
}

int Weapon::getAttack() const {
    return Attack_;
}
