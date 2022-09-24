// Следующее четное число для данного

#include <iostream>

int inputNumber()
{
	int n = 0;

	std::cout << "Enter the number: " << std::endl;
	std::cin >> n;

	return n;
}

int outputNumber(int n)
{
	std::cout << "The next even number: " << std::endl;
	std::cout << ((n % 2 + 2) % 2) * (n + 1) + (((n + 1) % 2 + 2) % 2) * (n + 2) << std::endl;

	return EXIT_SUCCESS;
}

 int main(int argc, char* argv[])
{
	outputNumber(inputNumber());

	return EXIT_SUCCESS;
}