#include <string>

#include "enemy.h"

bool Enemy::checkAnswer(int answer) const
{
    return answer == my_answer;
}

std::string Enemy::enemy_type() const
{
    return _type_of_enemy;
}

std::string Enemy::color() const{
    return my_color;
}
