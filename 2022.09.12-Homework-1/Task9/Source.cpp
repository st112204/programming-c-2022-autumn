// Значение многочлена 4 степени за 2 умножения

#include <iostream>

int inputX()
{
	int x = 0;

	std::cout << "X: " << std::endl;
	std::cin >> x;

	return x;
}

int calculateP(int x)
{
	int xSqr = 0;

	xSqr = x * x;

	return (xSqr + 1) * (xSqr + x) + 1;
}

 int main(int argc, char* argv[])
{
	std::cout << "x ^ 4 + x ^ 3 + x ^ 2 + x + 1 = \n" << calculateP(inputX()) << std::endl;

	return EXIT_SUCCESS;
}