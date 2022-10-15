#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	std::cin >> a >> b;
	std::cout << "\n";

	while (a <= b)
	{
		std::cout << a << "\n";
		++a;
	}

	return EXIT_SUCCESS;
}