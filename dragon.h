#ifndef DRAGON_H
#define DRAGON_H

#include <string>
#include <sstream>

#include "unit.h"
#include "enemy.h"

class Dragon: public Enemy
{

public:
    Dragon(std::string color, int start_health, int attackForce)
        :Enemy("Dragon", color, start_health, attackForce)
    {}

};


#endif // DRAGON_H
