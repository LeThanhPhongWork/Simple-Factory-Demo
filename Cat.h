#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal {
	public:
		string getName() override;
		string getSound() override;
};

#endif
