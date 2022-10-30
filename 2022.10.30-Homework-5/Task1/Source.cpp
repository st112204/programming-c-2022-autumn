#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int number = 0;
	int amount = 0;
	int* mas = NULL;

	scanf_s("%d", &n);

	mas = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", mas + i);
	}

	scanf_s("%d", &number);

	for (int i = 0; i < n; ++i)
	{
		if (*(mas + i) == number)
		{
			++amount;
		}
	}

	printf("%d", amount);

	free(mas);
	return EXIT_SUCCESS;
}