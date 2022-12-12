#include <iostream>

bool is_prime(int n, int i);


int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	if (is_prime(n, 2))
	{
		std::cout << "prime";
	}
	else
	{
		std::cout << "composite";
	}

	return EXIT_SUCCESS;
}


bool is_prime(int n, int i)
{
	if (i == n)
	{
		return 1;
	}

	if (n % i == 0)
		// how to do it better:
		// in this case dont check (n % k * i == 0) if (k * i < n) for all k
		// create an array
	{
		return 0;
	}

	return is_prime(n, i + 1);
}
