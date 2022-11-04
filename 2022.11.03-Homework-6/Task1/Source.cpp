#include <iostream>

int main(int argc, char* argv[])
{
	short n = 0;
	short mas[1000]{ 0 };

	std::cin >> n;

	for (short i = 0; i < n; ++i)
	{
		std::cin >> mas[i];
	}

	for (short i = n - 1; i >= 0; --i)
	{
		std::cout << mas[i] << " ";
	}

	return EXIT_SUCCESS;
}