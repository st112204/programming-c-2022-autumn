#include "Animal.h"
#define N 8

int main(int argc, char* argv[])
{
	Animal a[N];

	srand(time(NULL));

	{
		a[0].setType("beaver");
		a[0].setName("Igor'");

		a[1].setType("crow");
		a[1].setName("Miroslav");

		a[2].setType("whale");
		a[2].setName("Ivan");

		a[3].setType("anaconda");
		a[3].setName("Nikita");

		a[4].setType("lion");
		a[4].setName("Mitya");

		a[5].setType("panda");
		a[5].setName("Peicze");

		a[6].setType("crocodile");
		a[6].setName("Artyom");

		a[7].setType("fur seal");
		a[7].setName("Lyosha");
	}

	for (int i = 0; i < N; ++i)
	{
		a[i].setPower(1 + rand() % 100);
		a[i].printAnimal();
	}
	std::cout << "\n";

	for (int i = 0; i < N - 1; i += 2)
	{
		Fight(a[i], a[i + 1]);
	}

	for (int i = 0; i < N; ++i)
	{
		a[i].printAnimal();
	}

	return EXIT_SUCCESS;
}