#include <iostream>

int main(int argc, char* argv[])
{
	unsigned long n = 0;

	std::cin >> n;

	for (unsigned long i = 1; n > 0; i++)
	{
		for (unsigned long j = 1; j <= i && n > 0; j++)
		{
			std::cout << i << " ";
			--n;
		}
	}

	return EXIT_SUCCESS;
}