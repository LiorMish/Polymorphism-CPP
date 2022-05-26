//
// Created by liorm on 12/29/2021.
//

#ifndef LAB6_CREATURE_H
#define LAB6_CREATURE_H

#include <string.h>
#include <iostream>
//#include "Potion.h"

using namespace std;

class Creature {
private:
    static const int MAX_HEALTH = 100;
protected:
    int health_stat;
public:
    Creature();

    void hurtHealth(int amount);
    void gainHealth(int amount);

    virtual ~Creature();
    virtual string getType() = 0;
    virtual void fight(Creature &c) = 0;

    //void drink(Potion &p);
    virtual void drinkHealth() = 0;
    virtual void drinkPoison() = 0;
    virtual void drinkBeer() = 0;




};


#endif //LAB6_CREATURE_H
