#pragma once
#include <iostream>
#include <string>

class Animal {

private:

	std::string type;
	std::string name;
	int power;
	int* next;

public:

	Animal();
	Animal(int power, std::string type, std::string name);

	Animal(const Animal& animal);

	~Animal();

	Animal operator = (const Animal& animal);

	std::string getType();
	std::string getName();
	int getPower();

	void setType(std::string type);
	void setName(std::string name);
	void setPower(int power);

	void deleteAnimal();
	void printAnimal();
};

void Fight(Animal& animal_1, Animal& animal_2);