#include <iostream>

int main(int argc, char* argv[])
{
	short n = 0;
	short length = 0;
	short order = 0;
	short mas[100]{ 0 };

	std::cin >> n;
	order = n + 1;

	for (short i = 0; i < n; ++i)
	{
		std::cin >> mas[i];
	}

	std::cin >> length;

	for (short i = n - 1; i >= 0; --i)
	{
		if (length > mas[i])
		{
			--order;
		}
	}

	std::cout << order;

	return EXIT_SUCCESS;
}