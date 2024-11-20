#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
	public:
		virtual ~Animal() = default;
		
		virtual string getName() = 0;
		virtual string getSound() = 0;
};

#endif
