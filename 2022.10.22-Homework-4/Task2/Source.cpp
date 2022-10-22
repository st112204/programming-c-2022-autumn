#include <iostream>

int main(int argc, char* argv[])
{
	unsigned long n = 0;
	unsigned short d = 0;

	std::cin >> n;

	for (unsigned short i = 1; i <= 512; i *= 2)
	{
		d += n % 10 * i;
		n /= 10;
	}

	std::cout << d;

	return EXIT_SUCCESS;
}