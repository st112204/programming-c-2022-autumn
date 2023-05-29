#include "Animal.h"

Animal::~Animal() {}

void Animal::Settings(int ntype, int nage, int npower, int nname)
{
	std::string names[33]{ "Petin", "Ganberg", "Karpova", "Yarkin", "Puchkov", "Alginichev", "Lee", "Ejov","Filipenko","Lozovoy","Ivanov",\
	"Korovin", "Rodigina", "Gorbacheva", "Evseeva", "Dyadichkin", "Arjaev", "Piskun", "Lugovaya", "Akulich", "Posyagin", "Rivin", "Letova",\
	"Spicyn", "Shishurin", "Abakarova", "Bruver", "Zorina", "Nishanov", "Reutskay", "Lapin", "Bochkor", "Toskuev" };

	type = AnimalType(ntype);
	age = nage;
	power = npower;
	name = names[nname];

	switch (type)
	{
	case aist:
	{
		area = air;
		break;
	}
	case komar:
	{
		area = air;
		break;
	}
	case aksolotl:
	{
		area = water;
		break;
	}
	case ryba_kaplya:
	{
		area = water;
		break;
	}
	default:
	{
		area = land;
	}
	}
}

void Animal::PrintInfo()
{
	std::cout << "Name: " << name << std::endl;
	switch (type) //type -> area
	{
	case 0:
	{
		std::cout << "Type: none" << std::endl;
		std::cout << "Area: none" << std::endl;
		break;
	}
	case 1:
	{
		std::cout << "Type: wolk" << std::endl;
		std::cout << "Area: land" << std::endl;
		break;
	}
	case 2:
	{
		std::cout << "Type: lev" << std::endl;
		std::cout << "Area: land" << std::endl;
		break;
	}
	case 3:
	{
		std::cout << "Type: aksolotl" << std::endl;
		std::cout << "Area: water" << std::endl;
		break;
	}
	case 4:
	{
		std::cout << "Type: alabai" << std::endl;
		std::cout << "Area: land" << std::endl;
		break;
	}
	case 5:
	{
		std::cout << "Type: ryba_kaplya" << std::endl;
		std::cout << "Area: water" << std::endl;
		break;
	}
	case 6:
	{
		std::cout << "Type: komar" << std::endl;
		std::cout << "Area: air" << std::endl;
		break;
	}
	case 7:
	{
		std::cout << "Type: aist" << std::endl;
		std::cout << "Area: air" << std::endl;
		break;
	}
	}
	std::cout << "Lvl: " << lvl << std::endl;
	std::cout << "Power: " << power << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Status: " << ((status == alive) ? "alive" : "dead") << std::endl;
	std::cout << std::endl;
}

void Animal::Mighter()
{
	++power;
}

void Animal::SetPower(int power)
{
	power = power;
}

void Animal::SetLvl(int Lvl)
{
	if (Lvl > 0)
	{
		lvl = Lvl;
	}
}

int Animal::GetLvl()
{
	return lvl;
}

int Animal::GetPower() {
	return power;
}

Area Animal::GetArea()
{
	return(area);
}

AnimalType Animal::GetType()
{
	return type;
}

int Animal::GetAge()
{
	return age;
}

void Animal::SetAge(int age)
{
	this->age = age;
}

void Animal::SetType(AnimalType type)
{
	this->type = type;
}

void Animal::LvlUp()
{
	++lvl;
}

void Animal::Elder()
{
	++age;
}