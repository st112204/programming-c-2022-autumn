#include <iostream>

int phi(int n, int* mas);


int main(int argc, char* argv[])
{
	int n = 0;
	int* mas = nullptr;

	std::cin >> n;

	mas = new int[n]{ 0 };
	*mas = 1;
	*(mas + 1) = 1;

	std::cout << phi(n, mas);

	delete[] mas;

	return EXIT_SUCCESS;
}


int phi(int n, int* mas)
{
	if (*(mas + n - 1) == 0)
	{
		*(mas + n - 1) = phi(n - 1, mas) + phi(n - 2, mas);
	}

	return *(mas + n - 1);
}