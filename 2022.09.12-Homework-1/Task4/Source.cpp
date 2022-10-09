// Ring road length 109, v - vilocity, t - time, start at point 0. Find the coorndinate

#include <iostream>

 int main(int argc, char* argv[])
{
	 int v = 0;
	 int t = 0;

	 std::cin >> v >> t;

	 std::cout << ((v * t) % 109 + 109) % 109 << std::endl;

	return EXIT_SUCCESS;
}