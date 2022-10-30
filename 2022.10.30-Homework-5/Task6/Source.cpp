#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int tax = 0;
	int index = 0;
	int* profit = NULL;
	int* percent = NULL;

	scanf_s("%d", &n);

	profit = (int*)malloc(sizeof(int) * n);
	percent = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", profit + i);
	}

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", percent + i);
	}

	tax = (*profit) * (*percent);
	index = 0; //!

	for (int i = 1; i < n; ++i)
	{
		int tax0 = (*(profit + i)) * (*(percent + i));

		if (tax0 > tax)
		{
			tax = tax0;
			index = i;
		}
	}

	printf("%d", index + 1); //!

	free(profit);
	free(percent);
	return EXIT_SUCCESS;
}