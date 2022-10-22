#include <iostream>

int main(int argc, char* argv[])
{
	long a = 0;
	long b = 0;
	long c = 0;
	long d = 0;
	long e = 0;
	unsigned short s = 0;

	std::cin >> a >> b >> c >> d >> e;

	for (unsigned short x = 0; x <= 1000; x++)
	{
		s += a * x * x * x + b * x * x + c * x + d == 0 && x != e;
	}

	std::cout << s;

	return EXIT_SUCCESS;
}