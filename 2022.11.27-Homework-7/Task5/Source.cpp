#include <iostream>

int main(int argc, char* argv[])
{
	short m = 0;
	short n = 0;
	short** mas = nullptr;

	std::cin >> m >> n;

	// create dynamic array of dynamic arrays
	mas = new short* [m];

	// create dynamic arrays
	for (short i = 0; i < m; ++i)
	{
		mas[i] = new short[n];
	}

	std::cout << "\n";

	// input
	for (short i = 0; i < m; ++i)
	{
		for (short j = 0; j < n; ++j)
		{
			std::cin >> *(*(mas + i) + j);
		}
	}

	// Transposition-4
	{
		short tmp = 0;

		for (int j = 0; j < n; ++j)
		{
			for (int i = 0; i < m / 2; ++i)
			{
				tmp = *(*(mas + i) + j);
				*(*(mas + i) + j) = *(*(mas + m - 1 - i) + j);
				*(*(mas + m - 1 - i) + j) = tmp;
			}
		}
	}

	std::cout << "\n";

	// T-4 matrix output
	for (short i = 0; i < m; ++i)
	{
		for (short j = 0; j < n; ++j)
		{
			std::cout << *(*(mas + i) + j) << " ";
		}
		std::cout << "\n";
	}

	// delete dynamic arrays
	for (short i = 0; i < m; ++i)
	{
		if (*(mas + i) != nullptr)
		{
			delete[] * (mas + i);
		}
	}

	// delete dynamic array of dynamic arrays
	if (mas != nullptr)
	{
		delete[] mas;
	}

	return EXIT_SUCCESS;
}