// Apples per one student

#include <iostream>

int main(int argc, char* argv[])
{
	int students = 0;
	int apples = 0;

	std::cin >> students >> apples;

	std::cout << apples / students << std::endl;

	return EXIT_SUCCESS;
}