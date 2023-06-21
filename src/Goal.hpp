/*!
* \file Goal.hpp
* \brief File with the defination of Goal class
*/
#ifndef GOAL_H
#define GOAL_H
#include "GameBlock.hpp"

/*!
 * \brief Goal Class inheriting from GameBlock, with fixed speed and BlockType.
 */
class Goal: public GameBlock{
    public:
        /*!
         * \brief Goal constructor
         * \param pos Position of the Goal
         */
        Goal(PosType pos):GameBlock(pos,0,GoalType){
            if(!_Texture.loadFromFile(imagespath+"/door.png")){
            //return false;
        }
        _Texture.setSmooth(true);
        _Sprite.setTexture(_Texture);
        _Sprite.setTextureRect(sf::IntRect(0,0,50,50));
        }
};

#endif