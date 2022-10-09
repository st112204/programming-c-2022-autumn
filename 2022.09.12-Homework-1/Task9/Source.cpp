// Calculate the the value of 4 degree polynomial by only two multiplications

#include <iostream>

int main(int argc, char* argv[])
{
	 int x = 0;
	 int xSqr = 0;

	 std::cin >> x;
	 xSqr = x * x;
	 
	std::cout << (xSqr + 1) * (xSqr + x) + 1 << std::endl;

	return EXIT_SUCCESS;
}