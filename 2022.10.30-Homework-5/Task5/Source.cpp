#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int number = 0;
	int absolute = 0;
	int nearest = 0;
	int* mas = NULL;

	scanf_s("%d", &n);

	mas = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", mas + i);
	}

	scanf_s("%d", &number);

	absolute = *mas - number >= 0 ? *mas - number : number - *mas;
	nearest = *mas;

	for (int i = 1; i < n; ++i)
	{
		int absolute0 = *(mas + i) - number >= 0 ? *(mas + i) - number : number - *(mas + i);

		if (absolute0 < absolute || absolute0 == absolute && *(mas + i) < nearest)
		{
			absolute = absolute0;
			nearest = *(mas + i);
		}
	}

	printf("%d", nearest);

	free(mas);
	return EXIT_SUCCESS;
}