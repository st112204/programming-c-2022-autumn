// Neighbours of given cell

#include <iostream>

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int x = 0;
	int y = 0;

	std::cin >> m >> n;
	std::cin >> x >> y;

	if (1 < y)
	{
		std::cout << x << " " << y - 1 << std::endl;
	}
	if (1 < x)
	{
		std::cout << x - 1 << " " << y << std::endl;
	}
	if (y < n)
	{
		std::cout << x << " " << y + 1 << std::endl;
	}
	if (x < m)
	{
		std::cout << x + 1 << " " << y << std::endl;
	}

	return EXIT_SUCCESS;
}