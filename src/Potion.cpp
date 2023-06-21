#include "Potion.hpp"
#include "Player.hpp"


Potion::Potion(int HP, PosType pos, const std::string &name): Item(pos,name,PotionType), HP_(HP) {
    if(!_Texture.loadFromFile(imagespath+"/pot.png")){
            //return false;
        }
        _Texture.setSmooth(true);
        _Sprite.setTexture(_Texture);
        _Sprite.setTextureRect(sf::IntRect(0,0,50,50));
}

void Potion::UseItem(Player& player) {
    player.ChangeHp(HP_);
}

int Potion::getHp() const {
    return HP_;
}
