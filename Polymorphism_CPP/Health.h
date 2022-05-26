//
// Created by liorm on 1/4/2022.
//

#ifndef LAB7_HEALTH_H
#define LAB7_HEALTH_H


#include "Potion.h"

class Health : public Potion{
public:
    virtual void drink(Creature &creatures);
    virtual ~Health(){};
};


#endif //LAB7_HEALTH_H
