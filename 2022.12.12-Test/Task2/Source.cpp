#include <iostream>

void input(short* mas, short n, short i);
void reverse(short* mas, short n, short middle, short i);
void output(short* mas, short n, short i);


int main(int argc, char* argv[])
{
	short n = 0;
	short middle = 0;
	short* mas = nullptr;
	
	std::cin >> n;

	mas = new short[n + 1]{ 0 }; // mas[n] := tmp
	middle = n / 2;
	
	input(mas, n, 0);
	reverse(mas, n, middle, 0);
	output(mas, n, 0);

	delete[] mas;

	return EXIT_SUCCESS;
}


void input(short* mas, short n, short i)
{
	if (i == n)
	{
		return;
	}

	std::cin >> mas[i];

	input(mas, n, i + 1);
}

void reverse(short* mas, short n, short middle, short i)
{
	if (i == middle)
	{
		return;
	}

	mas[n] = mas[i];
	mas[i] = mas[n - 1 - i];
	mas[n - 1 - i] = mas[n];

	reverse(mas, n, middle, i + 1);
}

void output(short* mas, short n, short i)
{
	if (i == n)
	{
		return;
	}

	std::cout << mas[i] << " ";

	output(mas, n, i + 1);
}