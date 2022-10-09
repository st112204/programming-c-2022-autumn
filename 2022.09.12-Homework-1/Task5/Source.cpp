// The sum of digits of a three-digit number

#include <iostream>

 int main(int argc, char* argv[])
{
	 short abc = 0;	 
	 char bc = 0;

	 std::cin >> abc;
	 bc = abc % 100;

	 std::cout << (abc / 100) + (bc / 10) + (bc % 10) << std::endl;

	return EXIT_SUCCESS;
}