/*!
* \file Monster.hpp
* \brief File with the defination of Monster class
*/
#ifndef MONSTER_H
#define MONSTER_H

#include "GameBlock.hpp"

class Player;

/*!
 * \brief The Monster class inherit from GameBlock class, and define the Monster attribute and function
 */
class Monster: public GameBlock{
protected:
    std::string name_;
    int HP_;
    int AttackPoint_;

public:
    /*!
     * \brief Monster constructor
     * \param pos Position of the monster
     * \param speed speed of the monster
     * \param name name of the monster
     * \param hp Hp of the monster
     * \param attackPoint Attack of the Monster
     */
    Monster(const PosType &pos, int speed, const std::string &name, int hp, int attackPoint);

    /*!
     * \brief Get the monster name
     * \return the monster name
     */
    const std::string getName() const;

    /*!
    * \brief Get the monster health
    * \return the monster health
    */
    int getHp() const;

    /*!
     * \brief Change the health of the monster
     * \param hp the new health of the monster
     */
    void ChangeHp(int hp);

    /*!
     * \brief Will move the monster to a new position
     * \param newpos the new position of the monster
     */
    void Move(PosType newpos);

    /*!
     * \brief Will give the next position that the monster should have, given a position
     * \param d The direction of the movement
     * \return The next position depending of the movement
     */
    PosType NextPos(DirectionType d);

    /*!
     * \brief Will attack a Player, its HP will be diminued from the monster attack point
     * \param p The player that is attacked
     * \return True if the Player is dead, false otherwise
     */
    bool Attack(Player &p);
};
#endif