#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int number = 0;
	int biggest = 0;
	int lowest = 0;
	int* mas = NULL;

	scanf_s("%d", &n);

	mas = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", mas + i);
	}

	lowest = *mas;
	biggest = *mas;

	for (int i = 1; i < n; ++i)
	{
		if (*(mas + i) > biggest)
		{
			biggest = *(mas + i);
		}
		if (*(mas + i) < lowest)
		{
			lowest = *(mas + i);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (*(mas + i) == biggest)
		{
			*(mas + i) = lowest;
		}
		printf("%d ", *(mas + i));
	}

	free(mas);
	return EXIT_SUCCESS;
}