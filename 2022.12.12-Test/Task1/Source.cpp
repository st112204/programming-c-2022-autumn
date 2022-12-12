#include <iostream>

// place maharaj in current cell
// recursive place other maharajs in other cells, if it possible

//spoiler: programm hasn't finished

void mas_init(int** mas, int n, int i)
{
	if (i == n)
	{
		return;
	}
	
	mas[i] = new int[n]{ 0 };

	mas_init(mas, n, i + 1);
}

void mas_output(int** mas, int n, int i, int j)
{
	if (i == n)
	{
		return;
	}
	else if (j == n)
	{
		std::cout << "\n";
		mas_output(mas, n, i + 1, 0);
	}
	else
	{
		std::cout << mas[i][j] << " ";
		mas_output(mas, n, i, j + 1);
	}
}

void mas_delete(int** mas, int n, int i)
{
	if (i == n)
	{
		return;
	}

	delete[] mas[i];

	mas_delete(mas, n, i + 1);
}

//void cells_filled(int** mas, int i)

void cells_attacked(int** mas, int n, int i, int j)
{
	if (i == n)
	{
		return;
	}


}

int maharaj(int** mas, int n, int k, int i);

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int** mas = nullptr;

	std::cin >> n;
	std::cin >> k;

	mas = new int*[n]{ nullptr };
	mas_init(mas, n, 0);

	mas_output(mas, n, 0, 0);

	mas_delete(mas, n, 0);
	delete[] mas;

	return EXIT_SUCCESS;
}