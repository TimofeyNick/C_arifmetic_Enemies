#ifndef REDDRAGON_H
#define REDDRAGON_H

#include "unit.h"
#include "dragon.h"

class RedDragon: public Dragon
{
    int useless_cur = 0;
    static const int c_rDragonHealth = 50;
    static const int c_rDragonAttackForce = 5;
public:

    RedDragon()
        :Dragon("Red", c_rDragonHealth,
                 c_rDragonAttackForce)
    {}

    std::string printing_quest(int left,int right){

        std::stringstream question;
        question << left << " - " << right << ": ";
        my_answer = left - right;
        return question.str();
    }

    virtual std::string generateQuestion()
    {
        int left = 1 + rand()%100;
        int right = 1 + rand()%100;

        if (left >= right){return printing_quest(left, right);}
        else{return printing_quest(right, left);}
    }
};

#endif // REDDRAGON_H
