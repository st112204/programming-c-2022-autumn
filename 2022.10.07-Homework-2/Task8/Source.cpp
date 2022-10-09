// Triangle type

#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	if (a >= b + c || b >= a + c || c >= a + b)
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		int k = 0;
		int l = 0;
		int m = 0;

		k = b * b + c * c - a * a;
		l = a * a + c * c - b * b;
		m = a * a + b * b - c * c;

		if (k == 0 || l == 0 || m == 0)
		{
			std::cout << "right" << std::endl;
		}
		else if (k < 0 || l < 0 || m < 0)
		{
			std::cout << "obtuse" << std::endl;
		}
		else
		{
			std::cout << "acute" << std::endl;
		}
	}

	return EXIT_SUCCESS;
}