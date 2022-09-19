// Значение многочлена 4 степени за 2 умножения

#include <iostream>

using namespace std;

int inputX()
{
	int x = 0;

	cout << "X: " << endl;
	cin >> x;

	return x;
}

int calculateP(int x)
{
	int xSqr = x * x;

	return (xSqr + 1) * (xSqr + x) + 1;
}

int main()
{
	cout << "x ^ 4 + x ^ 3 + x ^ 2 + x + 1 = \n" << calculateP(inputX()) << endl;

	return EXIT_SUCCESS;
}