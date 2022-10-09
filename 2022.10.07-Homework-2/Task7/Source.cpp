// Is it possible to break off the chockolate bar once

#include <iostream>

int main(int argc, char* argv)
{
	short n = 0;
	short m = 0;
	short k = 0;

	std::cin >> n >> m >> k;

	if (k < n * m && (k % n == 0 || k % m == 0))
	{
		std::cout << "YES" << std::endl;;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	return EXIT_SUCCESS;
}