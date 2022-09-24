// Поменять переменные местами

#include <iostream>

 int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int tmp = 0;

	std::cout << "A: " << std::endl;
	std::cin >> a;
	std::cout << "B: " << std::endl;
	std::cin >> b;

	tmp = a;
	a = b;
	b = tmp;

	std::cout << "Swapped variables: " << std::endl;
	std::cout << a << " " << b << std::endl;

	return EXIT_SUCCESS;
}