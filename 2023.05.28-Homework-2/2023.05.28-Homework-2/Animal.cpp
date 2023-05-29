#include "Animal.h"

// create

Animal::Animal()
{
	this->type = "undefined_type";
	this->name = "undefined_name";
	this->power = 0;
}

Animal::Animal(int power, std::string type, std::string name)
{
	this->type = type;
	this->name = name;
	this->power = power;
}

// copy

Animal::Animal(const Animal& animal)
{
	this->type = animal.type;
	this->name = animal.name;
	this->power = animal.power;
}

// delete

Animal::~Animal() {};

// animal = animal

Animal Animal::operator = (const Animal& animal)
{
	this->power += animal.power / 2;
	return *this;
}

// get

std::string Animal::getType()
{
	return this->type;
}

std::string Animal::getName()
{
	return this->name;
}

int Animal::getPower()
{
	return this->power;
}

// set

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::setName(std::string name)
{
	this->name = name;
}

void Animal::setPower(int power)
{
	this->power = power;
}

// other methods

void Animal::deleteAnimal()
{
	this->Animal::~Animal();
}

void Animal::printAnimal()
{
	std::cout 
		<< this->type << " " 
		<< this->name << " " 
		<< this->power << " units" 
		<< std::endl;
}

// functions

void Fight(Animal& animal_1, Animal& animal_2)
{
	int power_1 = animal_1.getPower();
	int power_2 = animal_2.getPower();

	if (power_1 > power_2)
	{
		animal_1 = animal_2;
		animal_2.deleteAnimal();
	}
	else if (power_1 < power_2)
	{
		animal_2 = animal_1;
		animal_1.deleteAnimal();
	}
	else
	{
		if (rand() % 2 == 0)
		{
			animal_1 = animal_2;
			animal_2.deleteAnimal();
		}
		else
		{
			animal_2 = animal_1;
			animal_1.deleteAnimal();
		}
	}
}