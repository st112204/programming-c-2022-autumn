#include <iostream>
#include "Animal.h"
#include <ctime>

void DeleteAnimal(Animal** animals, int n);

void AnimalFight(Animal** animals, int n, int round);

int main(int argc, char* argv[])
{
	srand(time(0));

	Animal** animals = new Animal * [100];

	for (int i = 0; i < 100; ++i)
	{
		animals[i] = new Animal();
		animals[i]->Settings(rand() % 7 + 1, rand() % 9 + 1, rand() % 5, rand() % 33);
	}

	for (int i = 0; i < 100; ++i)
	{
		animals[i]->PrintInfo();
	}

	AnimalFight(animals, 100, 1);

	return EXIT_SUCCESS;
}

void DeleteAnimal(Animal** animals, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete animals[i];
	}
	delete[] animals;
}

void AnimalFight(Animal** animals, int n, int round)
{
	Area arena = Area(rand() % 3 + 1);

	std::cout << "Start of the " << round << " round" << std::endl;
	std::cout << "Area: " << ((arena == 1) ? "land" : (arena == 2) ? "air" : "water") << std::endl;

	for (int i = 0; i < n - 1; i += 2)
	{
		int attack1 = (animals[i]->GetArea() == arena) ? animals[i]->GetPower() * 2 * animals[i]->GetLvl() : animals[i]->GetPower() * animals[i]->GetLvl();
		int attack2 = (animals[i + 1]->GetArea() == arena) ? animals[i + 1]->GetPower() * 2 * animals[i + 1]->GetLvl() : animals[i + 1]->GetPower() * animals[i + 1]->GetLvl();

		if (attack1 > attack2)
		{
			animals[i]->LvlUp();
			animals[i]->Mighter();
			animals[i]->Elder();
			animals[i + 1]->status = dead;

			if (animals[i]->GetAge() >= 12) {
				animals[i]->status = dead;
			}
		}
		else
		{
			animals[i + 1]->LvlUp();
			animals[i + 1]->Mighter();
			animals[i + 1]->Elder();
			animals[i]->status = dead;

			if (animals[i + 1]->GetAge() >= 12) {
				animals[i + 1]->status = dead;
			}
		}
	}

	int j = 0;
	std::cout << "Winners of the " << round << " round: " << std::endl;
	for (int i = 0; i < n; ++i)
	{
		if (animals[i]->status == alive)
		{
			++j;
			animals[i]->PrintInfo();
		}
	}

	if (j > 1) {
		Animal** survivors = new Animal * [j];
		for (int i = 0; i < j; ++i) {
			survivors[i] = new Animal;
		}

		j = 0;
		for (int i = 0; i < n; ++i)
		{
			if (animals[i]->status == alive)
			{
				survivors[j]->SetLvl(animals[i]->GetLvl());
				survivors[j]->SetAge(animals[i]->GetAge());
				survivors[j]->SetPower(animals[i]->GetPower());
				survivors[j]->name = animals[i]->name;
				survivors[j]->SetType(animals[i]->GetType());
				++j;
			}
		}

		DeleteAnimal(animals, n);
		AnimalFight(survivors, j, round + 1);
	}
	else if (j == 1)
	{
		std::cout << "Winner of the match!" << std::endl;
		for (int i = 0; i < n; ++i)
		{
			if (animals[i]->status == alive)
			{
				animals[i]->PrintInfo();
			}
		}
		DeleteAnimal(animals, n);
	}
	else
	{
		std::cout << "There is no winner, everyone is dead." << std::endl;
		DeleteAnimal(animals, n);
	}
}