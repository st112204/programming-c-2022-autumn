#include <iostream>

int main(int argc, char* argv[])
{
	unsigned long n = 0;
	float q = 0;
	float s = 0;

	q = 1;
	s = 1;

	std::cin >> n;

	for (unsigned long i = 1; i <= n; i++)
	{
		s += (q /= i);
	}

	std::cout << s;

	return EXIT_SUCCESS;
}