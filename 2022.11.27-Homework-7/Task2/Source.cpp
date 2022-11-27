#include <iostream>

int main(int argc, char* argv[])
{
	short n = 0;
	short** mas = nullptr;

	std::cin >> n;

	// create dynamic array of dynamic arrays
	mas = new short* [n];

	// create dynamic arrays
	for (short i = 0; i < n; ++i)
	{
		mas[i] = new short[n];
	}

	std::cout << "\n";

	// input
	for (short i = 0; i < n; ++i)
	{
		for (short j = 0; j < n; ++j)
		{
			std::cin >> *(*(mas + i) + j);
		}
	}

	// Transposition
	{
		short tmp = 0;

		for (short i = 1; i < n; ++i)
		{
			for (short j = 0; j < i; ++j)
			{
				tmp = *(*(mas + i) + j);
				*(*(mas + i) + j) = *(*(mas + j) + i);
				*(*(mas + j) + i) = tmp;
			}
		}
	}

	std::cout << "\n";

	// T matrix output
	for (short i = 0; i < n; ++i)
	{
		for (short j = 0; j < n; ++j)
		{
			std::cout << *(*(mas + i) + j) << " ";
		}
		std::cout << "\n";
	}

	// delete dynamic arrays
	for (short i = 0; i < n; ++i)
	{
		if (*(mas + i) != nullptr)
		{
			delete[] *(mas + i);
		}
	}

	// delete dynamic array of dynamic arrays
	if (mas != nullptr)
	{
		delete[] mas;
	}

	return EXIT_SUCCESS;
}