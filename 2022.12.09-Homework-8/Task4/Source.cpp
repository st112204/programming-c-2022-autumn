#include <iostream>

void hanoi(int n, int from, int to);


int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	hanoi(n, 1, 2);

	return EXIT_SUCCESS;
}


void hanoi(int n, int from, int to)
{
	if (n == 0)
	{
		return;
	}

	int tmp = 6 - from - to;

	hanoi(n - 1, from, tmp);
	std::cout << "Disk " << n << " move from " << from << " to " << to << "\n";
	hanoi(n - 1, tmp, to);
}