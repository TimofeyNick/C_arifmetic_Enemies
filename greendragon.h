#ifndef GREENDRAGON_H
#define GREENDRAGON_H

#include "unit.h"
#include "enemy.h"
#include "dragon.h"


class GreenDragon: public Dragon
{
    static const int c_greenDragonHealth = 50;
    static const int c_greenDragonAttackForce = 5;
public:

    GreenDragon()
        :Dragon("Green", c_greenDragonHealth,
                 c_greenDragonAttackForce)
    {}
    virtual std::string generateQuestion()
    {
        int left = 1 + rand()%100;
        int right = 1 + rand()%100;

        std::stringstream question;
        question << left << " + " << right << ": ";
        my_answer = left + right;
        return question.str();
    }
};

#endif // GREENDRAGON_H
