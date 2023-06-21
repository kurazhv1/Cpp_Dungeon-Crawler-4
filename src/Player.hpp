/*!
* \file Player.hpp
* \brief File with the defination of Player class
*/
#ifndef PLAYER_H
#define PLAYER_H
#include "GameBlock.hpp"

#include <string>
#include <vector>
#include <iostream>
#include <memory>

class Monster;
class Item;

/*!
 * \brief The Player class inherit from GameBlock class, and define the Player attribute and function
 */
class Player: public GameBlock{
    protected:
        std::string name_;
        int HP_;
        int AttackPoint_;
        std::vector<std::shared_ptr<Item> > ItemInventory_;
        bool Win_;
        bool Loss_;
    public:
        /*!
         * \brief Player constructor
         * \param pos Position of the player
         * \param name Name of the player
         * \param HP HP of the player
         * \param AttackPoint Attack of the player
         */
        Player(PosType pos, const std::string &name, int HP, int AttackPoint);
        /*!
         * \brief Player default constructor
         */
        Player(){};
        /*!
         * \brief Get the player name
         * \return the player name
         */
        const std::string getName() const;

        /*!
        * \brief Get the player health
        * \return the player health
        */
        int getHp() const;

        /*!
        * \brief Get the player attack
        * \return the player attack
        */
        int getAttackPoint() const;

        /*!
         * \brief Change the health of the player
         * \param hp the new health of the player
         */
        void ChangeHp(int hp);

        /*!
         * \brief Change the Attack of the player
         * \param AttackPt the new attack of the player
         */
        void setAttackPoint(int AttackPt);

        /*!
         * \brief Get the item inventory of the player
         * \return the player item inventory
         */
        const std::vector<std::shared_ptr<Item> > &getItemInventory() const;

        /*!
         * \brief Add an item to the player ItemInventory
         * \param ItemToPick The item that will be added to the ItemInventory
         */
        void PickUpItem(std::shared_ptr<Item> ItemToPick);

        /*!
         * \brief Will call the function UseItem of the first Item in the ItemInventory
         */
        void UseItem();

        /*!
         * \brief Will change the first item of the ItemInventory to the second one, putting the first at the back
         */
        void nextItem();

        /*!
         * \brief Will attack a Monster, its HP will be diminued from the player attack point
         * \param m The monster that is attacked
         * \return True if the monster is dead, false otherwise
         */
        bool Attack(Monster &m);

        /*!
         * \brief Will move the player to a new position
         * \param newpos the new position of the player
         */
        void Move(PosType newpos);

        /*!
         * \brief Will give the next position that the player should have, given a position
         * \param d The direction of the movement
         * \return The next position depending of the movement
         */
        PosType NextPos(DirectionType d);

        /*!
         * \brief Set Win
         */
        void Setwin();
        /*!
         * \brief Set loss
         */
        void Setloss();

        /*!
         * \brief Return the value of Win
         */
        bool isWin() const;

        /*!
        * \brief Return the value of Loss
        */
        bool isLoss() const;

};
#endif