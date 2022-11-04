// This solution allows you to find the same elements 
// in two arrays of integer non-negative numbers
// and arrange them without repetitions in ascending order

#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int mas[30000]{ 0 }; // n meaning elements
	int m_a_s[30000]{ 0 }; // m meaning elements

	// I decided to do this without using the third array.
	// Also the search of identical elements and their ordering, 
	// which can be quite heavy processes,takes place in the smaller array.
	// Therefore, I need pointers to smaller and bigger arrays
	int v = 0;
	int w = 0;
	int* a = nullptr; // pointer to the small array, v meaning elements
	int* b = nullptr; // pointer to the big array, w meaning elements

	std::cin >> n >> m;
	std::cout << "\n";

	// get the mas
	for (int i = 0; i < n; ++i)
	{
		std::cin >> mas[i];
	}

	// get the m_a_s
	for (int i = 0; i < m; ++i)
	{
		std::cin >> m_a_s[i];
	}

	// in case of mas is smaller
	if (n < m)
	{
		v = n;
		a = mas;

		w = m;
		b = m_a_s;
	}
	// in case of m_a_s is smaller or equal
	else
	{
		v = m;
		a = m_a_s;

		w = n;
		b = mas;
	}

	// indication repetirions in smaller array as -1
	for (int i = 0; i < v; ++i)
	{
		// to avoid re-checks
		if (*(a + i) != -1)
		{
			for (int j = i + 1; j < v; ++j)
			{
				if (*(a + i) == *(a + j))
				{
					*(a + j) = -1;
				}
			}
		}
	}

	// indication repetirions in two arrays as -1
	for (int i = 0; i < v; ++i)
	{
		if (*(a + i) != -1)
		{
			bool is_common = 0;

			for (int j = 0; j < w; ++j)
			{
				if (*(a + i) == *(b + j))
				{
					is_common = 1;
					break;
				}
			}

			if (not is_common)
			{
				*(a + i) = -1;
			}
		}
	}

	// number of unique identical elements
	int count = 0;

	// copy unique elements to the bigger array b in ascending order
	while (true)
	{
		int max = -1;
		int max_index = 0;

		for (int i = 0; i < v; ++i)
		{
			if (*(a + i) > max)
			{
				max = *(a + i);
				max_index = i;
			}
		}
		*(a + max_index) = -1;
		if (max == -1)
		{
			break;
		}
		else
		{
			*(b + count) = max;
			++count;
		}
	}

	// result output
	std::cout << "\n";
	for (int i = count - 1; i >= 0; --i)
	{
		std::cout << *(b + i) << " ";
	}

	return EXIT_SUCCESS;
}