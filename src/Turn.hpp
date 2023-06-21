#ifndef TURN_H
#define TURN_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>
#include "GameBlock.hpp"
#include "Item.hpp"
#include "Player.hpp"
#include "Wall.hpp"
#include "Road.hpp"
#include "Goal.hpp"
#include "Monster.hpp"
#include "Map.hpp"
#include "Potion.hpp"
#include "Weapon.hpp"
class Turn{
    public:
        /*!
         * \brief Constructor for a turn class
         * \param map A map object with a 2 dimension vecotor contain every GameObject 
         */
        Turn( Map& map );//New turn object with player and amp object as parameter
        /*!
         * \brief Run the turn after the player's input 
         * \return True if the game continues false if the game is ended
         */
        bool RunPlayerTurn();//Run a turn for player and return true if the game still contiune and false if game ends
        /*!
         * \brief Move each monster in the map randomly after the player's turn 
         * \return True if the game continues false if the game is ended
         */
        bool RunMonsterTurn();// Run a turn for monster, moving the monsters randomly and attack if moved on the position of the player 
        /*!
         * \brief Swap the position of the GameObject in the map's 2 dimension vector and update the road's postype(the moveobj's postype will be updated in the turns)
         * \param raod The position of the moveobj is moving on
         * \param moveobj GameObject that is going to move, it could be a player or moster
         * \return True 
         */
        bool swap(const PosType& road,const PosType& moveobj);
        std::vector<std::vector<std::shared_ptr<GameBlock> > > map_;
    private:
        std::shared_ptr<Player> player_;
        std::vector<std::shared_ptr<Monster> > Monsters_;
         
        Map Map_; 
};
#endif