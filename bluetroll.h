#ifndef BLUETROLL_H
#define BLUETROLL_H

#include "troll.h"

class BlueTroll: public Troll
{
    static const int c_greenDragonHealth = 50;
    static const int c_greenDragonAttackForce = 5;
public:

    BlueTroll()
        :Troll("Blue", c_greenDragonHealth,
                 c_greenDragonAttackForce)
    {}

    virtual std::string generateQuestion();
};

#endif // BLUETROLL_H
