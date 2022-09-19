// Следующее и предыдущее числа для данного

#include <iostream>

using namespace std;

short inputNumber()
{
	short n = 0;

	cout << "Enter the number [ -32768 ; 32767 ]: " << endl;
	cin >> n;

	return n;
}

int outputNumber(short n)
{
	cout << "The next number for the number " << n << " is " << n + 1 << "." << endl;
	cout <<	"The previous number for the number " << n << " is " << n - 1 << "." << endl;

	return EXIT_SUCCESS;
}

int main()
{
	outputNumber(inputNumber());

	return EXIT_SUCCESS;
}