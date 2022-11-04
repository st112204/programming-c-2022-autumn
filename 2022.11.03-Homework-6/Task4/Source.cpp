#include <iostream>

int main(int argc, char* argv[])
{
	short n = 0;
	short a = 0;
	short b = 0;
	short c = 0;
	short d = 0;
	short mas[1000]{ 0 };

	std::cin >> n;

	for (short i = 0; i < n; ++i)
	{
		mas[i] = i + 1;
	}

	std::cin >> a >> b >> c >> d;

	// swap elements from the ends of array segment to its middle
	for (short i = 0; i < (b - a + 1) / 2; ++i)
	{
		short tmp = mas[a - 1 + i];
		mas[a - 1 + i] = mas[b - 1 - i];
		mas[b - 1 - i] = tmp;
	}

	// same
	for (short i = 0; i < (d - c + 1) / 2; ++i)
	{
		short tmp = mas[c - 1 + i];
		mas[c - 1 + i] = mas[d - 1 - i];
		mas[d - 1 - i] = tmp;
	}

	for (short i = 0; i < n; ++i)
	{
		std::cout << mas[i] << " ";
	}

	return EXIT_SUCCESS;
}