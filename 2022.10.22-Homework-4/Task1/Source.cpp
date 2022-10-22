#include <iostream>

int main(int argc, char* argv[])
{
	unsigned long n = 0;
	unsigned short s = 0;

	std::cin >> n;

	for (unsigned long i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			++s;
		}
	}

	std::cout << s;

	return EXIT_SUCCESS;
}