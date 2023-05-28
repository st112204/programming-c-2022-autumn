#include "Animal.h"

int main(int argc, char* argv[])
{
	Animal a;
	Animal b(22, "student", "Korovin");
	Animal c(b);

	std::cout << "\n";

	a.printAnimal();
	b.printAnimal();
	c.printAnimal();

	std::cout << "\n";

	a.elderAnimal();
	b.elderAnimal();
	c.elderAnimal();

	std::cout << "\n";

	a.printAnimal();
	b.printAnimal();
	c.printAnimal();

	std::cout << "\n";

	return EXIT_SUCCESS;
}