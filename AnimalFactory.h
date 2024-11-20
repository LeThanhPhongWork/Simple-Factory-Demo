#ifndef ANIMAL_FACTORY_H
#define ANIMAL_FACTORY_H

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Duck.h"

class AnimalFactory {
	public:
		static Animal* createAnimal(string animalName);
		static void describe(string animalName);
};

#endif
