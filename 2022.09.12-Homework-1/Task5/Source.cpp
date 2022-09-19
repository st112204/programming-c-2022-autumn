// Сумма цифр трехзначного числа

#include <iostream>

using namespace std;

int inputNumber()
{
	int abc = 0;

	cout << "Input the three-digit number: " << endl;
	cin >> abc;

	return abc;
}

int outputSum(int abc)
{
	int bc = abc % 100;

	cout << "Sum of digits: " << endl;
	cout << (abc / 100) + (bc / 10) + (bc % 10) << endl;

	return EXIT_SUCCESS;
}

int main()
{
	outputSum(inputNumber());

	return EXIT_SUCCESS;
}