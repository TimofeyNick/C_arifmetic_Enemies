#ifndef ENEMY_H
#define ENEMY_H

#include <string>

#include "unit.h"

using namespace std;


class Enemy: public Unit{

protected:
    int my_answer;
    std::string _type_of_enemy;
    std::string my_color;

public:
    static const int c_killScores = 100;

    Enemy(std::string type_of_enemy, std::string color, int start_health, int _attackForce)
        :Unit(start_health, _attackForce)
    {_type_of_enemy = type_of_enemy;
        my_color = color;}

    ~Enemy() {}

    virtual std::string generateQuestion() = 0;

    bool checkAnswer(int answer) const;

    std::string enemy_type() const;

    std::string color() const;

};

#endif // ENEMY_H
