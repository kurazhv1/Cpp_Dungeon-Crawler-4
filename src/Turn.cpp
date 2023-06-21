#include "Turn.hpp"
#include <random>
Turn::Turn(Map& map){
    player_=map.player;
    Map_=map;
    map_=Map_.GetMap();
    Monsters_=Map_.GetMonsters();
    
}
bool Turn::RunPlayerTurn(){
    //Verify the player's input
    char inputs[5]={'w','a','s','d','u'};// An array of possible input for checking th eplayersinput
    int n=sizeof(inputs)/sizeof(*inputs);// Varible needed to call std::find
    std::cout<<"HP: "<<player_->getHp()<<" Attack point: "<<player_->getAttackPoint()<<std::endl;
    if (player_->getHp()<=0)//check player's HP
    {
        player_->Setloss();
        return false;
    }
    bool rightinput=false;
    char playerinput;
    std::cout<<"Your current position: ("<<player_->Get_Pos().pos_x<<","<<player_->Get_Pos().pos_y<<")"<<std::endl;
    while (rightinput!=1)
    {
        std::cout<<"Enter instruction: ";
        std::cin>>playerinput;
        std::cout<<playerinput<<std::endl;
        rightinput=std::find(inputs,inputs+n,playerinput)!=inputs+n;
        
    }
    //Getting the next position of the player according the player's input
    std::cout<<"Getting the next position..."<<playerinput <<std::endl;
    PosType Nextpos;
    switch (playerinput)
    {
    case 'w':
        Nextpos=player_->NextPos(DOWN);
        std::cout<<"You are moving to: ("<<Nextpos.pos_x<<","<<Nextpos.pos_y<<")"<<std::endl;
        break;
    case 'a':
        Nextpos=player_->NextPos(LEFT);
        std::cout<<"You are moving to: ("<<Nextpos.pos_x<<","<<Nextpos.pos_y<<")"<<std::endl;
        break;
    case 's':
        Nextpos=player_->NextPos(UP);
        std::cout<<"You are moving to: ("<<Nextpos.pos_x<<","<<Nextpos.pos_y<<")"<<std::endl;
        break;
    case 'd':
        Nextpos=player_->NextPos(RIGHT);
        std::cout<<"You are moving to: ("<<Nextpos.pos_x<<","<<Nextpos.pos_y<<")"<<std::endl;
        break;
    default://Since the while loop before, the player inptut is now wasd or u, so if it is not wasd then it is u, then call the UseItem and return true ending this turn and continue the game
        player_->UseItem();
        std::cout<<"Used an item"<<std::endl;
        return true;
        break;
    }
    
    BlockType NextBlockType=map_[Nextpos.pos_x][Nextpos.pos_y]->Get_Type();//Next blocktype that is on the next position(Wall, Road, Monster or Item objects)
    //Cases with each different block type
    std::cout<<"The block type you are moving on: "<< NextBlockType<<std::endl;
    switch (NextBlockType)
    {
    case RoadType:
        swap(Nextpos,player_->Get_Pos());
        player_->Move(Nextpos);
        std::cout<<"Moved"<<std::endl;
        break;
    case WallType:
        std::cout<<"Walls!"<<std::endl;
        break;
    case MonsterType:
        for (auto i: Monsters_)//Find the monster that the player moved on and attack
        {
            PosType monster_pos=i->Get_Pos();//Monster's position
            if (monster_pos.pos_x==Nextpos.pos_x&&monster_pos.pos_y==Nextpos.pos_y)
            {
                player_->Attack(*i);
                std::cout<<"Attacked!!"<<std::endl;
                if (i->getHp()<=0)//If defeated
                {
                    std::cout<<"The monster is dead."<<std::endl;
                    std::shared_ptr<GameBlock> m=map_[monster_pos.pos_x][monster_pos.pos_y];
                    std::shared_ptr<Road> r( new Road(monster_pos));
                    std::shared_ptr<GameBlock> gb = r; 
                    map_[monster_pos.pos_x][monster_pos.pos_y]=gb;
                    (m->_Sprite).setPosition((monster_pos.pos_y),(monster_pos.pos_x));
                    swap(monster_pos,player_->Get_Pos());//swap the player with the new created road object
                    player_->Move(Nextpos);
                    auto it=find(Monsters_.begin(),Monsters_.end(),i);//Find the monster's location in the vector
                    if (it!=Monsters_.end())
                    {
                        Monsters_.erase(it);//remove the defeated monster from the vector
                    }
                }
                else{
                    std::cout<<"Monster HP: "<<i->getHp()<<std::endl;
                    std::cout<<"The mosnter is not dead yet."<<std::endl;
                }
                break;//Break the for loop
            }
        }
        break;
    case ItemType:
        for (auto i:Map_.GetItems())//Find the item that the player moved on and add it to inventory
        {
            PosType item_pos=i->Get_Pos();
            if (item_pos.pos_x==Nextpos.pos_x&&item_pos.pos_y==Nextpos.pos_y)
            {
                std::shared_ptr<GameBlock> item=map_[item_pos.pos_x][item_pos.pos_y];
                player_->PickUpItem(i);
                std::shared_ptr<Road> r( new Road(item_pos));
                std::shared_ptr<GameBlock> gb = r; 
                map_[item_pos.pos_x][item_pos.pos_y]=gb;
                (item->_Sprite).setPosition((item_pos.pos_y),(item_pos.pos_x));
                swap(item_pos,player_->Get_Pos());
                player_->Move(Nextpos);
                std::cout<<"Picked up an item."<<std::endl;
            }
        }
        break;
    case GoalType:
        player_->Setwin();
        return false;
    default:
        std::cout<<"Error in detacting next object type";
        break;
    }
    return true;
}
bool Turn::RunMonsterTurn(){
    std::cout<<"Moving mosters"<<std::endl;
    for(auto i:Monsters_){//Going through every monster in the map
        DirectionType direction=DirectionType(rand()%4);//chose a random direction
        PosType Nextpostype=i->NextPos(direction);//next postion the monster is heading
        BlockType Nextblocktype=Map_.GetBlock(Nextpostype);//BlockType of the next postion themonster is heading
        switch (Nextblocktype)
        {
        case PlayerType:
            i->Attack(*player_);
            if(player_->getHp()<0){
                return false;//game ended
            }
            else{
                std::cout<<"Being attacked!"<<std::endl;
            }
            break;
        case WallType:
            break;
        case RoadType:
            swap(Nextpostype,i->Get_Pos());
            i->Move(Nextpostype);
        case ItemType:
            break;
        case GoalType:
            break;
        default:
            break;
        }
    }
    return true;
}
bool Turn::swap(const PosType& road,const PosType& b){
    std::shared_ptr<GameBlock> temp=map_[road.pos_x][road.pos_y];
    std::shared_ptr<GameBlock> B=map_[b.pos_x][b.pos_y];
    map_[road.pos_x][road.pos_y]=B;
    (B->_Sprite).setPosition((road.pos_y*50),(road.pos_x*50));
    temp->_pos=b;//update the road's gameblock pos to the new position
    (temp->_Sprite).setPosition((b.pos_y*50),(b.pos_x*50));
    map_[b.pos_x][b.pos_y]=temp;

    return true;
}