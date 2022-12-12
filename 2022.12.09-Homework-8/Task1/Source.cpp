#include <iostream>

int min(int a, int b, int c, int d);


int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;

	std::cout << min(a, b, c, d);

	return EXIT_SUCCESS;
}


int min(int a, int b, int c, int d)
{
	if (a <= b && a <= c && a <= d)
	{
		return a;
	}

	return min(b, c, d, a);
}