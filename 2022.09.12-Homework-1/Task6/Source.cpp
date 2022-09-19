// Следующее четное число для данного

#include <iostream>

using namespace std;

int inputNumber()
{
	int n = 0;

	cout << "Enter the number: " << endl;
	cin >> n;

	return n;
}

int outputNumber(int n)
{
	cout << "The next even number: " << endl;
	cout << ((n % 2 + 2) % 2) * (n + 1) + (((n + 1) % 2 + 2) % 2) * (n + 2) << endl;

	return EXIT_SUCCESS;
}

int main()
{
	outputNumber(inputNumber());

	return EXIT_SUCCESS;
}