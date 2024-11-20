#include "AnimalFactory.h"

int main() {
	string types[] = {"Dog", "Cat", "Duck", "Lion"};
	
	for (const string& type : types) {
		AnimalFactory::describe(type);
	}
	
	return 0;
}
