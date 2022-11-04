#include <iostream>

int main(int argc, char* argv[])
{
	short n = 0;
	short mas[10000]{ 0 };

	std::cin >> n;

	for (short i = 0; i < n; ++i)
	{
		std::cin >> mas[i];
	}

	while (mas[0] != 1)
	{
		short tmp = mas[0];
		for (short i = 0; i < n - 1; ++i)
		{
			mas[i] = mas[i + 1];
		}
		mas[n - 1] = tmp;
	}

	for (short i = 0; i < n; ++i)
	{
		std::cout << mas[i] << " ";
	}

	return EXIT_SUCCESS;
}