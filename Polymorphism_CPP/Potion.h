
#ifndef POTION_H_
#define POTION_H_

#include "Creature.h"

using namespace std;

class Potion {
public:
	virtual void drink(Creature &creatures) = 0;
	virtual ~Potion(){};
};

#endif /* POTION_H_ */
