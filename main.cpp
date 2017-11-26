#include <iostream>
#include <sstream>
#include <cstdlib>
#include <list>

#include "unit.h"
#include "hero.h"
#include "dragon.h"
#include "greendragon.h"
#include "reddragon.h"
#include "blackdragon.h"
#include "enemy.h"
#include "bluetroll.h"
#include "troll.h"

using namespace std;


void showHealth(const Hero &hero, const Enemy &dragon)
{
    cout << "Hero health: " << hero.getHealth()
        << ", Dragon health: " << dragon.getHealth() << endl;
}

list<Enemy*> generateDragonList()
{
    list<Enemy*> competitors;
    competitors.push_back(new BlueTroll());
    competitors.push_back(new GreenDragon());
    competitors.push_back(new RedDragon());

    return competitors;
}


bool playGame(Hero &hero, list<Enemy*> &dragons)
{
    bool gameOver = false;

    for (list<Enemy*>::iterator dragon = dragons.begin();
            dragon != dragons.end(); dragon++)
    {
        cout << "You have met a new " << (*dragon)->color() << " " << (*dragon)->enemy_type() << ". "<< "Fight!" << endl;

        while ((*dragon)->isAlive() && hero.isAlive())
        {
            hero.attack(**dragon);
        }
        if (!hero.isAlive())
        {
            gameOver = true;
            break;
        }
        else // dragon was killed!
        {
            hero.addScores(Enemy::c_killScores);
            cout << "Ough! You have killed the enemy!" << endl;
        }
    }
    return gameOver;
}


int main()
{
    Hero hero;
    list<Enemy*> dragons = generateDragonList();
    bool gameResult = playGame(hero, dragons);

    if (gameResult) {
        cout << "Game over! Your score is: " << hero.getScores() << endl;
    } else {
        cout << "You win! Your score is: " << hero.getScores() << endl;
    }

    for (list<Enemy*>::iterator dragon = dragons.begin()
         ; dragon != dragons.end()
         ; ++dragon)
    {
        delete *dragon;
    }

    return 0;
}
