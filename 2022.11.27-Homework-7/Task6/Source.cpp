#include <iostream>

int main(int argc, char* argv[])
{
	short m = 0;
	short n = 0;
	short** mas = nullptr;
	short** m_a_s = nullptr;

	std::cin >> m >> n;

	// create 2 dynamic arrays of dynamic arrays
	mas = new short* [m];
	m_a_s = new short* [m];

	// create dynamic arrays
	for (short i = 0; i < m; ++i)
	{
		mas[i] = new short[n];
		m_a_s[i] = new short[n];
	}

	std::cout << "\n";

	// input 1
	for (short i = 0; i < m; ++i)
	{
		for (short j = 0; j < n; ++j)
		{
			std::cin >> *(*(mas + i) + j);
		}
	}

	std::cout << "\n";

	// input 2
	for (short i = 0; i < m; ++i)
	{
		for (short j = 0; j < n; ++j)
		{
			std::cin >> *(*(m_a_s + i) + j);
		}
	}

	std::cout << "\n";

	// sum output
	for (short i = 0; i < m; ++i)
	{
		for (short j = 0; j < n; ++j)
		{
			std::cout << *(*(mas + i) + j) + *(*(m_a_s + i) + j) << " ";
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

		if (*(m_a_s + i) != nullptr)
		{
			delete[] * (m_a_s + i);
		}
	}

	// delete dynamic array of dynamic arrays 1
	if (mas != nullptr)
	{
		delete[] mas;
	}

	// delete dynamic array of dynamic arrays 2
	if (m_a_s != nullptr)
	{
		delete[] m_a_s;
	}

	return EXIT_SUCCESS;
}