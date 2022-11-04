#include <iostream>

int main(int argc, char* argv[])
{
	short n = 0;
	short odd = 0;
	short mas[100]{ 0 };

	std::cin >> n;

	for (short i = 0; i < n; ++i)
	{
		std::cin >> mas[i];
	}

	for (short i = 0; i < n; ++i)
	{
		if (mas[i] % 2 != 0)
		{
			std::cout << mas[i] << " ";
			++odd;
		}
	}
	std::cout << "\n";

	for (short i = 0; i < n; ++i)
	{
		if (mas[i] % 2 == 0)
		{
			std::cout << mas[i] << " ";
		}
	}
	std::cout << "\n";

	if (odd > n - odd)
	{
		std::cout << "NO";
	}
	else
	{
		std::cout << "YES";
	}

	return EXIT_SUCCESS;
}