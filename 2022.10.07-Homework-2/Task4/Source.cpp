// (a * x + b) / (c * x + d) == 0, c != 0, d != 0

#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;

	if (a == 0)
	{
		if (b == 0)
		{
			std::cout << "INF" << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;
		}
	}
	else
	{
		int x = -b / a;
		int modX = -b % a;

		if (modX != 0 || x == -d / c && modX == -d % c)
		{
			std::cout << "NO" << std::endl;
		}
		else
		{
			std::cout << x << std::endl;
		}
	}

	return EXIT_SUCCESS;
}