// Swap variables

#include <iostream>

 int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int tmp = 0;

	std::cin >> a >> b;

	tmp = a;
	a = b;
	b = tmp;

	std::cout << a << " " << b << std::endl;

	return EXIT_SUCCESS;
}