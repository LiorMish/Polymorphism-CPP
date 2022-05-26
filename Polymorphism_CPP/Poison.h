//
// Created by liorm on 1/4/2022.
//

#ifndef LAB7_POISON_H
#define LAB7_POISON_H


#include "Potion.h"

class Poison : public Potion {
public:
    virtual void drink(Creature &creatures);
    virtual ~Poison(){};
};


#endif //LAB7_POISON_H
