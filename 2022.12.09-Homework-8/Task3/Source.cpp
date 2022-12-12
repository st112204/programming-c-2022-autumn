#include <iostream>

int c(int n, int k, int** mas);


int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int** mas = nullptr;

	std::cin >> n >> k;

	if (n < k || n < 0 || k < 0)
	{
		std::cout << "FAIL";
		return EXIT_FAILURE;
	}

	mas = new int*[n + 1]{ nullptr };
	for (int i = 0; i < n + 1; ++i)
	{
		*(mas + i) = new int[k + 1]{ 0 };
		**(mas + i) = 1;
		if (i < k + 1)
		{
			*(*(mas + i) + i) = 1;
		}
	}

	std::cout << c(n + 1, k + 1, mas);

	for (int i = 0; i < k + 1; ++i)
	{
		delete[] *(mas + i);
	}
	delete[] mas;

	return EXIT_SUCCESS;
}


int c(int n, int k, int** mas)
{
	if (*(*(mas + n - 1) + k - 1) == 0)
	{
		*(*(mas + n - 1) + k - 1) = c(n - 1, k - 1, mas) + c(n - 1, k, mas);
	}

	return *(*(mas + n - 1) + k - 1);
}