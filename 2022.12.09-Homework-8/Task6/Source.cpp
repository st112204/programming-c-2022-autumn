#include <iostream>

char max(char* s, int i);


int main(int argc, char* argv[])
{
	char s[1001]{ 0 };

	std::cin >> s;

	std::cout << max(s, 0);

	return EXIT_SUCCESS;
}


char max(char* s, int i)
{
	if (*(s + i + 1) == 0)
	{
		return *(s + i);
	}

	if (*(s + i) > *(s + i + 1))
	{
		*(s + i + 1) = *(s + i);
	}

	max(s, i + 1);

}