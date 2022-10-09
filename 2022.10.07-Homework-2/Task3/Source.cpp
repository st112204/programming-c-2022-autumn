// meatball cooking time

#include <iostream>

int main(int argc, char* argv[])
{
	short k = 0; // meatball per pan
	short m = 0; // cooking time of one side of meatball 
	short n = 0; // meatball at all
	int time = 0;
	bool isTimeInfinity = 0;

	std::cin >> k >> m >> n;

	if (k != 0)
	{
		time = 2 * m * (n / k + (n % k > 0));
	}
	else if (m == 0 || n == 0)
	{
		time = 0;
	}
	else
	{
		isTimeInfinity = 1; 
	}

	if (isTimeInfinity == 1)
	{
		std::cout << "infinity" << std::endl;
	}
	else
	{
		std::cout << time << std::endl;
	}
	
	return EXIT_SUCCESS;
}