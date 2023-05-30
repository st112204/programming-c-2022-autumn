#include <iostream>

enum AnimalType{ undefined_type, A, B, C, D, E, F };
enum AnimalName{ undefined_name, Igor, Miroslav, Ivan, Nikita, Mitya, Ramil, Artyom, Peicze, Lyusha, Egor };
enum AnimalPlace{ undefined_place, MathMech, Pionerskaya, SaintP };

class Animal
{
private:
	AnimalType type;
	int power;
	int armor;

	void losehealth(int n) { armor = armor - n; }

public:
	AnimalName name;

	Animal(AnimalType type = undefined_type)
	{
		this->type = type;
		this->armor = 100;
		this->power = 0;

		int x = 0;
		int y = 0;

		x = rand() % 20;
		y = rand() % 11;

		if (y == 0) { y++; };

		this->name = AnimalName(y);

		if (type == undefined_type)
		{
			name = undefined_name;
			armor = 0;
			power = 0;
		}

		else if (type == A)
		{
			power = 30 + x;
		}

		else if (type == B)
		{
			power = 10 + x;
		}

		else if (type == C)
		{
			power = 50 + x;
		}

		else if (type == D)
		{
			power = 100 + x;
		}

		else if (type == E)
		{
			power = 100 + x;
		}

		else if (type == F)
		{
			power = 20 + x;
		}
	}

	Animal(const Animal& animal) :
		type(animal.type),
		name(animal.name),
		power(animal.power),
		armor(animal.armor) {}

	~Animal() {}

	Animal& operator=(const Animal& animal)
	{
		type = animal.type;
		name = animal.name;
		power = animal.power;
		armor = animal.armor;

		return *this;
	}

	void Printinfo()
	{
		std::cout << "type " << type << " " << "\nname " << name << " " << "\npower " << power << " " << "\narmor " << armor << std::endl;
	}

	int GetType() { return type; }
	int GetName() { return name; }
	int Getpower() { return power; }
	int GetHealth() { return armor; }
	void Mighter() { power += 10; }
	friend Animal Fight(Animal& animal1, Animal& animal2);

	void Set(AnimalPlace sur, AnimalType type)
	{
		if (sur == Pionerskaya)
		{
			if (type == D || type == A || type == F)
			{
				power = power + 20;
			}
		}
		if (sur == SaintP)
		{
			if (type == C || type == A || type == F)
			{
				power += 20;
			}
		}
		if (sur == MathMech)
		{
			if (type == B || type == E || type == F)
			{
				power += 20;
			}
		}
	}

};

Animal Fight(Animal& animal1, Animal& animal2)
{
	animal1.losehealth(animal2.Getpower() / 10);

	return animal1;
};

int randomPlace()
{
	int x = 0;

	x = rand() % 4;
	if (x == 0) { x++; };

	return x;
};

void vers(Animal& animal1, Animal& animal2)
{
	AnimalPlace sur = AnimalPlace(randomPlace());

	animal1.Set(sur, AnimalType(animal1.GetType()));
	animal2.Set(sur, AnimalType(animal2.GetType()));

	int x = 0;

	x = rand() % 2;

	if ((animal2.GetHealth() > animal1.GetHealth()) || ((animal2.GetHealth() == animal1.GetHealth()) && (x == 0)))
	{
		Fight(animal1, animal2);

		if (animal1.GetHealth() < 0)
		{
			animal2.Mighter();
		}
		else if (animal1.GetHealth() > 0)
		{
			Fight(animal2, animal1);

			if (animal2.GetHealth() < 0)
			{
				animal1.Mighter();
			}
		}
	}

	else if ((animal1.GetHealth() > animal2.GetHealth()) || ((animal2.GetHealth() == animal1.GetHealth()) && (x == 1)))
	{
		Fight(animal2, animal1);

		if (animal2.GetHealth() < 0)
		{
			animal1.Mighter();
		}
		else if (animal2.GetHealth() > 0)
		{
			Fight(animal1, animal2);

			if (animal1.GetHealth() < 0)
			{
				animal2.Mighter();
			}
		}
	}
};

int main(int argc, char* argv[])
{
	srand(time(NULL));

	int n = 100;

	Animal* An = new Animal[n]{ AnimalType(0) };

	int x = 0;

	for (int i = 0; i < n; i++)
	{
		x = rand() % 7;
		if (x == 0) { x++; };
		AnimalType k = AnimalType(x);
		Animal a(k);
		An[i] = a;
	}

	int i = 0;

	while (n > 1)
	{
		vers(An[i], An[i + 1]);

		if (An[i].GetHealth() <= 0)
		{
			for (int j = i; j < n - 1; ++j)
			{
				An[j] = An[j + 1];
			}
			n--;
		}
		if (An[i + 1].GetHealth() < 0)
		{
			for (int j = i + 1; j < n - 1; ++j)
			{
				An[j] = An[j + 1];
			}
			n--;
		}

		++i;

		if (i >= n - 1)
		{
			i = 0;
		}
	}

	std::cout << "the winner is: \n\n";

	An[0].Printinfo();

	delete[] An;

	return EXIT_SUCCESS;
}