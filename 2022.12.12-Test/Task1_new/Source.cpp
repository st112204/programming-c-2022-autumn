#include <iostream>
#include <stdio.h>

void init(int** mas, int n, int i);
void border(int** mas, int n, int i, int j);
void out(int** mas, int n, int i, int j);
void del(int** mas, int n, int i);
int move(int m);
void spiral(int** mas, int n, int value, int m, int i, int j);


int main(int argc, char* argv[])
{
	int n = 0;
	int** mas = nullptr;

	std::cin >> n;

	mas = new int* [n + 2] { nullptr };
	init(mas, n + 2, 0);
	border(mas, n + 2, 0, 0);

	spiral(mas, n, 1, 0, 1, 1);

	out(mas, n + 1, 1, 1);

	del(mas, n + 2, 0);
	delete[] mas;

	return EXIT_SUCCESS;
}


void init(int** mas, int n, int i)
{
	if (i == n)
	{
		return;
	}

	mas[i] = new int[n] { 0 };

	init(mas, n, i + 1);
}

void border(int** mas, int n, int i, int j)
{
	if (i == n)
	{
		return;
	}
	else if (j == n)
	{
		border(mas, n, i + 1, 0);
	}
	else
	{
		if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
		{
			mas[i][j] = -1;
		}
		border(mas, n, i, j + 1);
	}
}

void out(int** mas, int n, int i, int j)
{
	if (i == n)
	{
		printf("\n");
		return;
	}
	else if (j == n)
	{
		printf("\n");
		out(mas, n, i + 1, 1);
	}
	else
	{
		printf("%3.d ", mas[i][j]);
		out(mas, n, i, j + 1);
	}
}

void del(int** mas, int n, int i)
{
	if (i == n)
	{
		return;
	}

	delete[] mas[i];

	del(mas, n, i + 1);
}

// ( -> (0) right -> (1) down -> (2) left -> (3) up -> )
int move(int m)
{
	if (m == 3)
	{
		return 0;
	}
	else
	{
		return ++m;
	}
}

void spiral(int** mas, int n, int value, int m, int i, int j)
{
	if (value == n * n + 1)
	{
		return;
	}

	mas[i][j] = value;

	if (m == 0) // right
	{
		if (mas[i][j + 1] != 0)
		{
			spiral(mas, n, value + 1, move(m), i + 1, j);
		}
		else
		{
			spiral(mas, n, value + 1, m, i, j + 1);
		}
	}
	else if (m == 1) // down
	{
		if (mas[i + 1][j] != 0)
		{
			spiral(mas, n, value + 1, move(m), i, j - 1);
		}
		else
		{
			spiral(mas, n, value + 1, m, i + 1, j);
		}
	}
	else if (m == 2) // left
	{
		if (mas[i][j - 1] != 0)
		{
			spiral(mas, n, value + 1, move(m), i - 1, j);
		}
		else
		{
			spiral(mas, n, value + 1, m, i, j - 1);
		}
	}
	else if (m == 3) // up
	{
		if (mas[i - 1][j] != 0)
		{
			spiral(mas, n, value + 1, move(m), i, j + 1);
		}
		else
		{
			spiral(mas, n, value + 1, m, i - 1, j);
		}
	}
}