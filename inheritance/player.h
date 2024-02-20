#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "person.h"

class player : public person {
    friend std::ostream& operator <<(std::ostream& out, const player& player);
    public:
    player()=default;
    player(std::string& game_param);
    ~player();
    private:
    std::string m_game{"None"};
};
#endif
/*
    copy constructors are not inherited. But you won't usually notice this as the compiler will insert an automatic copy constructor .
    -Inherited constructors are base constructors. They have no knowledge o fthe derived  class. Any member from the derived class will just contain junk or the  whatever default value it's initialized with
    -Constructors are inherited with whatever access specifier they had in base class
    -on top of derived constructors, you can add your own that possibly properly initialize derived member variables..
    -inheriting constructors  adds a level of confusion to your code, it's not clear which constructors is building your object. It is recommended to avoid them and only use this feature if no other option is available.
     
*/