// The next even number for given

#include <iostream>

 int main(int argc, char* argv[])
{
	 int n = 0;

	 std::cin >> n;

	 std::cout << ((n % 2 + 2) % 2) * (n + 1) + (((n + 1) % 2 + 2) % 2) * (n + 2) << std::endl;

	return EXIT_SUCCESS;
}