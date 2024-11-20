#include "AnimalFactory.h"

Animal* AnimalFactory::createAnimal(string animalName) {
	if (animalName == "Dog") {
		return new Dog;
	}
	
	if (animalName == "Cat") {
		return new Cat;
	}
	
	if (animalName == "Duck") {
		return new Duck;
	}
	
	return nullptr;
}

void AnimalFactory::describe(string animalName) {
	Animal* animal = createAnimal(animalName);
	
	if (animal) {
		cout << "I am a " << animal->getName() << ". " << animal->getSound() << "!" << endl;
		
		delete animal;
	}
	
	else {
		cout << animalName << " is an invalid name" << endl;
	}
}
