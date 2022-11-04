#include <iostream>

int main(int argc, char* argv[])
{
	short n = 0;
	short m = 0;
	int mas[1000]{ 0 };
	short m_a_s[100][2]{ 0 };

	std::cin >> n;
	std::cout << "\n";

	for (short i = 0; i < n; ++i)
	{
		std::cin >> mas[i];
	}
	std::cout << "\n";

	std::cin >> m;
	std::cout << "\n";

	for (short i = 0; i < m; ++i)
	{
		std::cin >> m_a_s[i][1] >> m_a_s[i][2];
	}
	std::cout << "\n";

	for (short i = 0; i < m; ++i)
	{
		for (short j = m_a_s[i][1] - 1; j < m_a_s[i][2]; ++j)
		{
			std::cout << mas[j] << " ";
		}
		std::cout << "\n";
	}

	return EXIT_SUCCESS;
}