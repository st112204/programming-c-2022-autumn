// in developing

#include <iostream>

void input_func(char** mas, int i, int n)
{
	if (n == 0)
	{
		return;
	}

	std::cin >> mas[i][0] >> mas[i][1];

	input_func(mas, i + 1, n - 1);
}

int main(int argc, char* argv[])
{
	int n = 0;
	char mas[1000][2]{ 0 };

	std::cin >> n;

	input_func(mas, 0, n);


	return EXIT_SUCCESS;
}