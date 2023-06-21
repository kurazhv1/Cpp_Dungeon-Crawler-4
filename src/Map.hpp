#ifndef MAP_HPP
#define MAP_HPP


#include <vector>
#include <memory>
#include <fstream>
#include <sstream>
#include "Player.hpp"
#include "header.hpp"

class GameBlock;
class Monster;
class Item;


class Map {
    protected:
        
        std::vector<std::shared_ptr<Monster> > monsters_;
        std::vector<std::shared_ptr<Item> > items_;
        std::vector<std::vector<std::shared_ptr<GameBlock> > > map_;
    public:
        std::shared_ptr<Player> player;
        // Map(Player& player,std::vector<std::shared_ptr<Monster> >& monsters,std::vector<std::shared_ptr<Item> >& items);
        /*!
         * \brief The map constructor
         * \param file_name text file from where the map is read
         */
        Map(const std::string& file_name);
        Map();
        /*!
        * \brief read the map from text file
        * \param file_name
        */
        void ReadMap(const std::string& file_name);
        /*!
        * \brief Get BlockType of the specific pos
        * \param pos Position of interest
        * \return BlockType of the specific pos
        */
        BlockType GetBlock(PosType pos);

        /*!
        * \brief Get vector of Monsters on the Map object
        * \return a vector of Monster references
        */
        std::vector<std::shared_ptr<Monster> > GetMonsters();
        /*!
        * \brief Get BlockType of the specific pos
        * \param pos Position of interest
        * \return BlockType of the specific pos
        */
        std::vector<std::shared_ptr<Item> > GetItems();

        /*!
         * \brief Get the vector 2D that is the map
         * \return A 2D vector of GameBlock
         */
        std::vector<std::vector<std::shared_ptr<GameBlock> > > GetMap();
        
};

#endif