#ifndef DUCK_H
#define DUCK_H

#include "Animal.h"

class Duck : public Animal {
	public:
		string getName() override;
		string getSound() override;
};

#endif
