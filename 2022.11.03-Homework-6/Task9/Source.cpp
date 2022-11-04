#include <iostream>

int main(int argc, char* argv[])
{
	short n = 0;
	short length = 0;
	short price = 0;
	short price_index = 0;
	short old_price_index = 0;
	short cash = 0;
	short mas[100]{ 0 };

	length = 1;

	std::cin >> n;

	for (short i = 0; i < n; ++i)
	{
		std::cin >> mas[i];
	}

	price = mas[0];

	while (old_price_index != n - 1)
	{
		for (short i = old_price_index + 1; i < n; ++i)
		{
			if (mas[i] > price)
			{
				price = mas[i];
				price_index = i;
			}
		}
		length += price_index - old_price_index;
		cash += length * price;
		old_price_index = price_index;
		price = 0;		
		length = 0;
	}
	
	std::cout << cash;

	return EXIT_SUCCESS;
}