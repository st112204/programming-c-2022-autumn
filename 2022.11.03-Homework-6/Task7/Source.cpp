#include <iostream>

int main(int argc, char* argv[])
{
	short n = 0;
	short min = 0;
	short max = 0;
	short min_index = 0;
	short max_index = 0;
	short sum = 0;
	short product = 0;
	short mas[100]{ 0 };

	std::cin >> n;

	for (short i = 0; i < n; ++i)
	{
		std::cin >> mas[i];
		if (mas[i] > 0)
		{
			sum += mas[i];
		}
	}

	min = max = mas[0];
	min_index = max_index = 0;

	for (short i = 1; i < n; ++i)
	{
		if (mas[i] < min)
		{
			min = mas[i];
			min_index = i;
		}
		if (mas[i] > max)
		{
			max = mas[i];
			max_index = i;
		}
	}

	product = 1;

	if (min_index > max_index)
	{
		short tmp = min_index;
		min_index = max_index;
		max_index = tmp;
	}

	for (short i = min_index + 1; i < max_index; ++i)
	{
		product *= mas[i];
	}

	std::cout << sum << " " << product;

	return EXIT_SUCCESS;
}