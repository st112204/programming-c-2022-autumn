#include "Animal.h"

// create

Animal::Animal()
{
	std::cout << "CREATE   " << this << std::endl;

	this->age = 0;
	this->type = "undefined_type";
	this->name = "undefined_name";
}

Animal::Animal(int age, std::string type, std::string name)
{
	std::cout << "CREATE*  " << this << std::endl;

	this->age = age;
	this->type = type;
	this->name = name;
}

// copy

Animal::Animal(const Animal& other)
{
	std::cout << "COPY     " << &other << " -> " << this << std::endl;

	this->age = other.age;
	this->type = other.type;
	this->name = other.name;
}

// delete

Animal::~Animal()
{
	std::cout << "DELETE   " << this << std::endl;

}

// funtions

void Animal::printAnimal()
{
	std::cout << "PRINT    " << this;

	std::cout << " " << type << " " << name << " " << age << " years" << std::endl;
}

void Animal::elderAnimal()
{
	std::cout << "ELDER    " << this << std::endl;

	++age;
}