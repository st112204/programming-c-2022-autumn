#pragma once
#include "Animal.h"

class List {

private:

	Animal data;
	Animal* next;

public:

	// create

	List(Animal animal, Animal* next)
	{
		this->data = animal;
		this->next = next;
	}

	// copy

	/*
	List(const List& list)
	{
		this->data = list.getData();
		this->next = list.getNext();
	}
	*/

	// get

	/*
	* Animal::Animal getData()
	{
		return this->data;
	}
	*/

	// set

};