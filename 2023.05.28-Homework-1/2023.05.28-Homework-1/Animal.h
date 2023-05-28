#pragma once

#include <iostream>
#include <string>

struct Animal {
	int age;
	std::string type;
	std::string name;

	Animal();
	Animal(int age, std::string type, std::string name);

	Animal(const Animal& other);

	~Animal();

	void printAnimal();
	void elderAnimal();
};