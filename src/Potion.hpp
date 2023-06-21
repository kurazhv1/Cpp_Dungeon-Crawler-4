/*!
* \file Potion.hpp
* \brief File with the defination of Potion class
*/
#ifndef POTION_H
#define POTION_H
#include "Item.hpp"

/*!
 * \brief The potion class inherit from Item abstract class, and define the health potion
 */
class Potion: public Item{
protected:
    int HP_;

public:
    /*!
     * \brief Potion constructor
     * \param HP The HP that will be restored to the player
     * \param pos Position of the item
     * \param name Name of the item
     */
    Potion(int HP, PosType pos,const std::string &name);

    /*!
     * \brief Use Item virtual function, that will heal the player of a number of HP
     * \param player The player that will be heal
     */
    virtual void UseItem(Player& player);

    /*!
     * \brief Get the HP that the potion will heal
     * \return Return the number of HP that the potion will heal
     */
    int getHp() const;

    /*!
     * \brief Potion destructor
     */
    virtual ~Potion() {}
};
#endif