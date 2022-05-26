//
// Created by liorm on 1/4/2022.
//

#ifndef LAB7_BEER_H
#define LAB7_BEER_H


#include "Potion.h"

class Beer : public Potion{
public:
    virtual void drink(Creature &creatures);
    virtual ~Beer(){};
};


#endif //LAB7_BEER_H
