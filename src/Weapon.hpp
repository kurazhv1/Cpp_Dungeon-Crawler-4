/*!
* \file Weapon.hpp
* \brief File with the defination of Weapon class
*/
#ifndef WEAPON_H
#define WEAPON_H
#include "Item.hpp"

/*!
 * \brief The Weapon class inherit from Item abstract class, and define the weapon
 */
class Weapon: public Item{
protected:
    int Attack_;

public:
    /*!
     * \brief Potion constructor
     * \param Attack The Attack that the player will get
     * \param pos Position of the item
     * \param name Name of the item
     */
    Weapon(int Attack, PosType pos,const std::string &name);

    /*!
     * \brief Use Item virtual function, that will give Attack to the player
     * \param player The player that will be given attack
     */
    virtual void UseItem(Player& player);

    /*!
     * \brief Get the attack that will be given by the weapon to the player
     * \return The attack that will be given
     */
    int getAttack() const;

    /*!
     * \brief Weapon Destructor
     */
    virtual ~Weapon() {}
};
#endif