/*!
* \file Wall.hpp
* \brief File with the defination of Wall class
*/
#ifndef WALL_H
#define WALL_H
#include "GameBlock.hpp"

/*!
 * \brief Wall Class inheriting from GameBlock, with fixed speed and BlockType.
 */
class Wall: public GameBlock{
    public:
        /*!
         * \brief Wall constructor
         * \param pos Position of the Wall
         */
        Wall(PosType pos):GameBlock(pos,0,WallType){
            if(!_Texture.loadFromFile(imagespath+"/wall.png")){
            //return false;
        }
        _Texture.setSmooth(true);
        _Sprite.setTexture(_Texture);
        _Sprite.setTextureRect(sf::IntRect(0,0,50,50));
        }
};

#endif