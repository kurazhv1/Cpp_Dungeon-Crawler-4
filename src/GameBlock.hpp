/*!
* \file GameBlock.hpp
* \brief File with the defination of GameBlock class
*/
#ifndef GAMEBLOCK_H
#define GAMEBLOCK_H
#include <string>
#include <vector>
#include <SFML/Graphics.hpp>
#include "header.hpp"

/*!
 * \brief The base class of this application. Game Block is a unit of the map
 */
class GameBlock{
    protected:
        
        int _speed;
        BlockType _type;
        
    public:
        PosType _pos;
        sf::Texture _Texture;
        sf::Sprite _Sprite;
        /*!
         * Create a new GameBlock from PosType, Speed and BlockType
         * \brief GameBlock Constructor
         * \param pos Position of the GameBlock
         * \param speed Speed of the GameBlock
         * \param type BlockType of the GameBlock
         */
        GameBlock(PosType pos,int speed, BlockType type);
        /*!
        * \brief Default constructor
        */
        GameBlock(){};
        /*!
        * \brief Get the position of the GameBlock
        * \return the position of the GameBlock
        */
        PosType Get_Pos() const;

        /*!
        * \brief Get the speed of the GameBlock
        * \return the speed of the GameBlock
        */
        int Get_Speed() const;

        /*!
        * \brief Get the type of the GameBlock
        * \return the type of the GameBlock
        */
        BlockType Get_Type() const;

        /*!
        * \brief Set the position of the GameBlock
        * \param pos position of the GameBlock
        */
        void Set_pos(PosType& pos);

};

#endif