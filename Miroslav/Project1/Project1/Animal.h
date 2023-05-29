#pragma once
#include <string>
#include <iostream>
#include <ctime>

enum AnimalType
{
	none = 0,
	wolk = 1,
	lev = 2,
	aksolotl = 3,
	alabai = 4,
	ryba_kaplya = 5,
	komar = 6,
	aist = 7
};

enum Area
{
	None = 0,
	land = 1,
	air = 2,
	water = 3
};

enum Status
{
	alive = 0,
	dead = 1
};

struct Animal
{
private:
	AnimalType type;
	int lvl;
	Area area;
	int age;
	int power;
public:
	std::string name;
	Status status;

	Animal(std::string name = "Posyagin", AnimalType type = wolk, int lvl = 1, int power = 2, Area area = None, Status status = alive, int age = 1) :
		name(name),
		type(type),
		age(age),
		lvl(lvl),
		power(power),
		area(area),
		status(status) {}

	Animal(const Animal& an) :
		name(an.name),
		type(an.type),
		age(an.age),
		lvl(an.lvl),
		power(an.power),
		area(an.area),
		status(an.status) {}

	~Animal();

	void Settings(int ntype = 0, int nage = 0, int npower = 0, int nname = 0); //power, area & other stuff
	void PrintInfo(); //information about the animal
	void Mighter();	//the animal becomes stronger
	AnimalType GetType();	//prints type
	int GetLvl(); //print lvl
	Area GetArea(); //prints area
	int GetPower();
	int GetAge();
	void SetLvl(int lvl); //lvl
	void SetPower(int power);
	void SetAge(int age);
	void SetType(AnimalType type);
	void LvlUp(); //lvl + 1
	void Elder();
};