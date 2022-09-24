// Следующее и предыдущее числа для данного

#include <iostream>

short inputNumber()
{
	short n = 0;

	std::cout << "Enter the number [ -32768 ; 32767 ]: " << std::endl;
	std::cin >> n;

	return n;
}

int outputNumber(short n)
{
	std::cout << "The next number for the number " << n << " is " << n + 1 << "." << std::endl;
	std::cout <<	"The previous number for the number " << n << " is " << n - 1 << "." << std::endl;

	return EXIT_SUCCESS;
}

 int main(int argc, char* argv[])
{
	outputNumber(inputNumber());

	return EXIT_SUCCESS;
}