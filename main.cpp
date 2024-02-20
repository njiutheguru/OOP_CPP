#include <iostream>
#include <string_view>
#include "person.h"
#include "player.h"

//using namespace std;
//public inheritance
//We use the : operator to inherit from another class
//eg. class player: public person
/*
With public inheritance, derivd classes can access and use public members
of the base class, but the derived class can't directly access private members
The same also applies to friends of the derived cla
ss. they have access to private members of
 derived, but don't have access to the base class.

*/
player::player(std::string& game_param)
    :m_game(game_param){}


std::ostream& operator <<(std::ostream& out, const player& player){
    out<<"player : [game: " <<player.m_game <<"names: "<<player.get_last_name()<<" ]";
    return out;
}
int main()
{

    return 0;
}