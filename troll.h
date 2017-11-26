#ifndef TROLL_H
#define TROLL_H

#include <sstream>

#include "enemy.h"

class Troll: public Enemy
{

public:
    Troll(std::string color, int start_health, int attackForce)
        :Enemy("Troll", color, start_health, attackForce)
    {}

};

#endif // TROLL_H
