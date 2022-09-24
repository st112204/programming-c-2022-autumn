// Сумма цифр трехзначного числа

#include <iostream>

int inputNumber()
{
	int abc = 0;

	std::cout << "Input the three-digit number: " << std::endl;
	std::cin >> abc;

	return abc;
}

int outputSum(int abc)
{
	int bc = 0;

	bc = abc % 100;

	std::cout << "Sum of digits: " << std::endl;
	std::cout << (abc / 100) + (bc / 10) + (bc % 10) << std::endl;

	return EXIT_SUCCESS;
}

 int main(int argc, char* argv[])
{
	outputSum(inputNumber());

	return EXIT_SUCCESS;
}