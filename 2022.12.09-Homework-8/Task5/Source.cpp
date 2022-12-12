#include <iostream>

int is_possible(int n);


int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	if (is_possible(n) == 1)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}


int is_possible(int n)
{
	if (n <= 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	if (is_possible(n - 3) == 1)
	{
		return 1;
	}
	if (is_possible(n - 5) == 1)
	{
		return 1;
	}
	return 0;
}