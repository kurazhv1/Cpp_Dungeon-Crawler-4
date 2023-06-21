#include "Map.hpp"

#include "GameBlock.hpp"
#include "Player.hpp"
#include "Monster.hpp"

#include "Item.hpp"
#include "Potion.hpp"
#include "Weapon.hpp"
#include "Goal.hpp"

#include "Wall.hpp"
#include "Road.hpp"


Map::Map(const std::string& file_name) {
    ReadMap(file_name);
}
Map::Map(){}

void Map::ReadMap(const std::string& file_name){
    std::ifstream map_file(file_name, std::ios::in);
    std::string line;
    std::string block;
    char type;
    std::istringstream iss;
    int row=0;

    while(std::getline(map_file, line) ){
        int col=0;
        map_.push_back(std::vector<std::shared_ptr<GameBlock> >());  // for each line, add a vector of GameBlocks
        std::cout<<line<<std::endl;
        iss.str(line);
        while(iss >> block){
            type = block[0];
            PosType pos = PosType();
            pos.pos_x = row;
            pos.pos_y = col;

            switch(type){
                case 'W':
                {   std::shared_ptr<Wall> w( new Wall(pos));
                    std::shared_ptr<GameBlock> gb = w;
                    map_[row].push_back(gb);
                    break;}
                case 'R':
                {   std::shared_ptr<Road> r( new Road(pos));
                    std::shared_ptr<GameBlock> gb = r;
                    map_[row].push_back(gb);
                    break;}
                case 'G':
                {   std::shared_ptr<Goal> g( new Goal(pos));
                    std::shared_ptr<GameBlock> gb = g;
                    map_[row].push_back(gb);
                    break;}
                case 'P':
                {   std::shared_ptr<Player> p( new Player(pos, "Player_01", 20, 5));
                    player=p;
                    std::shared_ptr<GameBlock> gb = p;
                    map_[row].push_back(gb);
                    break;}
                case 'M':
                {   std::shared_ptr<Monster> m( new Monster(pos, 1, "Dragon", 20, 5));
                    std::shared_ptr<GameBlock> gb = m;
                    map_[row].push_back(gb);
                    monsters_.push_back(m);
                    break;}
                case 'O':
                {   std::shared_ptr<Potion> p( new Potion(10, pos, "Potion_01"));
                    std::shared_ptr<GameBlock> gb = p;
                    map_[row].push_back(gb);
                    items_.push_back(p);
                    break;}
                case 'E':
                {   std::shared_ptr<Weapon> e( new Weapon(10, pos, "Sword"));
                    std::shared_ptr<GameBlock> gb = e;
                    map_[row].push_back(gb);
                    items_.push_back(e);
                    break;}
            }
            ++col;
        }
        ++row;
        iss.clear();
    }
}


BlockType Map::GetBlock(PosType pos){
    return map_[pos.pos_x][pos.pos_y]->Get_Type();
}

std::vector<std::shared_ptr<Monster> > Map::GetMonsters(){
    return monsters_;
}
std::vector<std::shared_ptr<Item> > Map::GetItems(){
    return items_;
}
std::vector<std::vector<std::shared_ptr<GameBlock> > > Map::GetMap(){
    return map_;
}