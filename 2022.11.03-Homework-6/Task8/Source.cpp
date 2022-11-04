#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	short mas[100000]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> mas[i];
	}

	std::cin >> k;

	if (k < 0)
	{
		while (k != 0)
		{
			short tmp = mas[0];
			for (int i = 0; i < n - 1; ++i)
			{
				mas[i] = mas[i + 1];
			}
			mas[n - 1] = tmp;
			++k;
		}
	}
	else
	{
		while (k != 0)
		{
			short tmp = mas[n - 1];
			for (int i = n - 1; i > 0; --i)
			{
				mas[i] = mas[i - 1];
			}
			mas[0] = tmp;
			--k;
		}
	}
	
	for (int i = 0; i < n; ++i)
	{
		std::cout << mas[i] << " ";
	}

	return EXIT_SUCCESS;
}