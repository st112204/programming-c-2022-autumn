// На какой отметке КАД длиной 109 через время T остановится байкер Вася, который стартует из точки 0 со скоростью V

#include <iostream>

int inputV()
{
	int V = 0;

	std::cout << "V: " << std::endl;
	std::cin >> V;

	return V;
}

int inputT()
{
	int T = 0;

	std::cout << "T: " << std::endl;
	std::cin >> T;

	return T;
}

int outputPoint(int T, int V)
{
	std::cout << "Coordinate: " << std::endl;
	std::cout << ((V * T) % 109 + 109) % 109 << std::endl;

	return EXIT_SUCCESS;
}

 int main(int argc, char* argv[])
{
	outputPoint(inputT(), inputV());

	return EXIT_SUCCESS;
}