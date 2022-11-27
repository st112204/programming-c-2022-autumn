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

	std::cout << "\n";

	// amounts output
	{
		short s = 0;

		for (short i = 0; i < m; ++i)
		{
			s = 0;
			for (short j = 0; j < n; ++j)
			{
				s += *(*(mas + i) + j);
			}
			std::cout << s << " ";
		}

		std::cout << "\n\n";

		for (short j = 0; j < n; ++j)
		{
			s = 0;
			for (short i = 0; i < m; ++i)
			{
				s += *(*(mas + i) + j);
			}
			std::cout << s << " ";
		}

		std::cout << "\n\n";
	}

	// array output
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