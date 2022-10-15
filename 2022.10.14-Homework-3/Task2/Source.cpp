#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	unsigned short s = 0;

	std::cin >> n;

	while (n != 0)
	{
		if (n < 0 && n % 2 != 0)
		{
			s++;
		}
		std::cin >> n;
	}

	std::cout << "\n" << s << "\n";

	return EXIT_SUCCESS;
}