// The queen move

#include <iostream>

int main(int argc, char* argv[])
{
	char b = 0;
	char a = 0;
	char y = 0;
	char x = 0;

	std::cin >> b >> a >> y >> x;

	if (a == x || b == y || x - a == y - b || x - a == b - y)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	return EXIT_SUCCESS;
}