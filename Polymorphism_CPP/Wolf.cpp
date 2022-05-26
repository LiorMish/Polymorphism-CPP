//
// Created by liorm on 12/29/2021.
//

#include "Wolf.h"

string Wolf:: getType(){
    return "Wolf";
}
void Wolf:: fight(Creature &c){
    if (c.getType() == "Troll"){
        cout << this->getType() << " fought " << c.getType() << " - " << this->getType() << " has won" << endl;
        this->gainHealth(20);
        c.hurtHealth(50);
    }
    else if (c.getType() == "Penguin"){
        cout << this->getType() << " fought " << c.getType() << " - " << c.getType() << " has won" << endl;
        this->hurtHealth(50);
        c.gainHealth(20);
    }
    else{
        cout << "2 Wolves met - no fight" << endl;
    }

}

void Wolf::drinkHealth(){
    cout << "Wolf has drank Health" << endl;
    this->gainHealth(10);
}
void Wolf::drinkPoison(){
    cout << "Wolf has drank Poison" << endl;
    this->hurtHealth(5);
}
void Wolf::drinkBeer(){
    cout << "Wolf has drank Beer" << endl;
    this->hurtHealth(5);
}
