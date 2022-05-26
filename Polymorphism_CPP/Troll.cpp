//
// Created by liorm on 12/29/2021.
//

#include "Troll.h"


string Troll:: getType(){
    return "Troll";
}
void Troll:: fight(Creature &c){
    if (c.getType() == "Penguin"){
        cout << this->getType() << " fought " << c.getType() << " - " << this->getType() << " has won" << endl;
        this->gainHealth(20);
        c.hurtHealth(50);
    }
    else if (c.getType() == "Wolf"){
        cout << this->getType() << " fought " << c.getType() << " - " << c.getType() << " has won" << endl;
        this->hurtHealth(50);
        c.gainHealth(20);
    }
    else{
        cout << "2 Trolls met - no fight" << endl;
    }

}

void Troll::drinkHealth(){
    cout << "Troll has drank Health" << endl;
    this->hurtHealth(10);
}
void Troll::drinkPoison(){
    cout << "Troll has drank Poison" << endl;
    this->gainHealth(5);
}
void Troll::drinkBeer(){
    cout << "Troll has drank Beer" << endl;
    this->gainHealth(5);
}
