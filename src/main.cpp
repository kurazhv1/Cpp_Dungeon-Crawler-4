#include "Map.hpp"
#include "iostream"
#include "Turn.hpp"
#include "Player.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include "GameBlock.hpp"
#include <SFML/Graphics.hpp>
//int main(int argc, char * argv[]){
//    std::cout << argv[0];
//    std::cin.get();
//}

int main(){
    sf::RenderWindow window(sf::VideoMode(750, 750), "Dungeon Crawler");
    Map map(mappath+"/MAP_01.txt");
    std::cout<<"Map created"<<std::endl;
    Turn turn(map);
    while (window.isOpen()&&!(map.player->isWin()||map.player->isLoss()))
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        for(auto& row:turn.map_){
            for(auto& col:row){
                window.draw(col->_Sprite);
        }
    }
        window.display();
        turn.RunPlayerTurn();
        turn.RunMonsterTurn();
        
    }


    return 0;
}







