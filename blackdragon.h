#ifndef BLACKDRAGON_H
#define BLACKDRAGON_H

#include "unit.h"
#include "dragon.h"

class BlackDragon: public Dragon
{
    static const int c_DragonHealth = 50;
    static const int c_DragonAttackForce = 5;
public:

    BlackDragon()
        :Dragon("Black", c_DragonHealth,
                 c_DragonAttackForce)
    {}
    virtual std::string generateQuestion()
    {
        int left = 1 + rand()%9;
        int right = 1 + rand()%9;

        std::stringstream question;
        question << left << " * " << right << ": ";
        my_answer = left * right;
        return question.str();
    }
};

#endif // BLACKDRAGON_H
