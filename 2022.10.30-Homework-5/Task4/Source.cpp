#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int sum = 0;
	int* mas = NULL;

	scanf_s("%d", &n);

	mas = (int*)malloc(sizeof(int) * (n + 2));

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", mas + i);
	}
	*(mas + n) = *mas;
	*(mas + n + 1) = *(mas + 1);

	sum = *mas + *(mas + 1) + *(mas + 2);

	for (int i = 1; i < n; ++i)
	{
		int sum0 = *(mas + i) + *(mas + i + 1) + *(mas + i + 2);

		if (sum0 > sum)
		{
			sum = sum0;
		}
	}

	printf("%d", sum);

	free(mas);
	return EXIT_SUCCESS;
}