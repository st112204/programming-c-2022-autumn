#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;
	std::cout << "\n";

	if (n >= 1)
	{
		int i = 0;
		int j = 0;

		do
		{
			i = 1;
			do
			{
				std::cout << i + j - (i + j >= n) * 2 * (i + j - n) << " ";
				++i;
			} while (i <= n);
			std::cout << "\n";
			++j;
		} while (j <= n - 1);
	}

	return EXIT_SUCCESS;
}