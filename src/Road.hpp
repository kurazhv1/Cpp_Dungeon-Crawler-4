/*!
* \file Road.hpp
* \brief File with the defination of Road class
*/
#ifndef ROAD_H
#define ROAD_H
#include "GameBlock.hpp"

/*!
 * \brief Road Class inheriting from GameBlock, with fixed speed and BlockType.
 */
class Road: public GameBlock{
    public:
        /*!
         * \brief Road constructor
         * \param pos Position of the Road
         */
        Road(PosType pos):GameBlock(pos,0,RoadType){
            if(!_Texture.loadFromFile(imagespath+"/road.png")){
            //return false;
        }
        _Texture.setSmooth(true);
        _Sprite.setTexture(_Texture);
        _Sprite.setTextureRect(sf::IntRect(0,0,50,50));
        }
};

#endif