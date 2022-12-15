#include <iostream>

void init(int** mas, int n, int i)
{
	if (i == n)
	{
		return;
	}
	
	mas[i] = new int[n]{ 0 };

	init(mas, n, i + 1);
}

void init_init(int*** m_a_s, int n, int k, int i)
{
	if (i == k)
	{
		return;
	}

	m_a_s[i] = new int*[n]{ nullptr };
	init(m_a_s[i], n, 0);
	init_init(m_a_s, n, k, i + 1);
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

void del_del(int*** m_a_s, int n, int k, int i)
{
	if (i == k)
	{
		return;
	}

	del(m_a_s[i], n, 0);

	delete[] m_a_s[i];

	del_del(m_a_s, n, k, i + 1);
}

void out(int** mas, int n, int i, int j)
{
	if (i == n)
	{
		std::cout << "\n";
		return;
	}
	else if (j == n)
	{
		std::cout << "\n";
		out(mas, n, i + 1, 0);
	}
	else
	{
		std::cout << mas[i][j] << " ";
		out(mas, n, i, j + 1);
	}
}

void copy(int** mas, int** m_a_s, int n, int i, int j)
{
	if (i == n)
	{
		return;
	}
	else if (j == n)
	{
		copy(mas, m_a_s, n, i + 1, 0);
	}
	else
	{
		m_a_s[i][j] = mas[i][j];
		copy(mas, m_a_s, n, i, j + 1);
	}
}

void clr(int** mas, int n, int i, int j)
{
	if (i == n)
	{
		return;
	}
	else if (j == n)
	{
		clr(mas, n, i + 1, 0);
	}
	else
	{
		mas[i][j] = 0;
		clr(mas, n, i, j + 1);
	}
}

void fill_attacked(int** mas, int n, int ii, int jj, int i, int j)
{
	if (i == n)
	{
		return;
	}
	else if (j == n)
	{
		fill_attacked(mas, n, ii, jj, i + 1, 0);
	}
	else
	{
		if
		(
			mas[i][j] == 0 &&
			(
				i == ii || j == jj || i + j == ii + jj || i - j == ii - jj ||
				(i >= ii - 2 && i <= ii + 2 && j >= jj - 2 && j <= jj + 2)
			)
		)
		{
			mas[i][j] = 99;
		}
		fill_attacked(mas, n, ii, jj, i, j + 1);
	}
}

void fill_next(int** mas, int n, int k0, int k, int i, int j)
{
	if (i == n)
	{
		return;
	}
	else if (j == n)
	{
		fill_next(mas, n, k0, k, i + 1, 0);
	}
	else
	{
		if ()
	}
}

int count_free(int** mas, int n, int i, int j)
{
	if (i == n)
	{
		return 0;
	}
	else if (j == n)
	{
		return count_free(mas, n, i + 1, 0);
	}
	else if (mas[i][j] == 0)
	{
		return 1 + count_free(mas, n, i, j + 1);
	}
	else
	{
		return count_free(mas, n, i, j + 1);
	}
}

int maharaj(int** mas, int*** m_a_s, int n, int k0, int k, int i, int j)
{
	//fill_attacked(mas, n, ii, jj, 0, 0);
	if (k != k0)
	{
		copy(mas, m_a_s[k], n, 0, 0);
	}
	return 0;
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int** mas = nullptr;
	int*** m_a_s = nullptr; // reserve copies of mas for maharaj algorithm

	std::cin >> n;
	std::cin >> k;

	mas = new int*[n]{ nullptr };
	init(mas, n, 0);
	m_a_s = new int**[k]{ nullptr };
	init_init(m_a_s, n, k, 0);

	std::cout << maharaj(mas, n, k + 1, k, 0, 0);

	/*fill_attacked(m_a_s[0], n, 3, 4, 0, 0);
	fill_attacked(m_a_s[1], n, 5, 6, 0, 0);

	out(m_a_s[0], n, 0, 0);
	out(m_a_s[1], n, 0, 0);*/

	del(mas, n, 0);
	delete[] mas;
	del_del(m_a_s, n, k, 0);
	delete[] m_a_s;

	return EXIT_SUCCESS;
}