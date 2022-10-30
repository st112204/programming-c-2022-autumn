#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int numberL = 0;
	int numberR = 0;
	int biggest = 0;
	int index = 0;
	int* mas = NULL;

	scanf_s("%d", &n);

	mas = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", mas + i);
	}

	scanf_s("%d %d", &numberL, &numberR);

	biggest = *(mas + numberL - 1);
	index = numberL - 1; //!

	for (int i = numberL; i <= numberR - 1; i++)
	{
		if (*(mas + i) > biggest)
		{
			biggest = *(mas + i);
			index = i;
		}
	}

	printf("%d %d", biggest, index + 1); //!

	free(mas);
	return EXIT_SUCCESS;
}