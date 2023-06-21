/*!
* \file Item.hpp
* \brief File with the defination of Item abstract class
*/
#ifndef ITEM_H
#define ITEM_H
#include "GameBlock.hpp"

class Player;

/*!
 * \brief The item class inherit from Game Block and is the base abstract class for all item
 */
class Item: public GameBlock{
    protected:
        std::string name_;
        ItemTypeEnum type_;

    public:
        /*!
         * \brief Item constructor
         * \param pos Position of the Item
         * \param name Name of the Item
         * \param type ItemType of the Item
         */
        Item(PosType pos,const std::string &name, ItemTypeEnum type);

        /*!
         * \brief Pure Virtual function UseItem
         * \param player Player on wich the Item will be use
         */
        virtual void UseItem(Player& player) = 0;

        /*!
         * \brief Item destructor
         */
        virtual ~Item() {};
};
#endif