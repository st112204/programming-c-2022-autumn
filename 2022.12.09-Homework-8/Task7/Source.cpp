#include <iostream>

void star(char* s, char* ss, int i);


int main(int argc, char* argv[])
{
	char s[1001]{ 0 };
	char ss[1999]{ 0 };

	std::cin >> s;

	star(s, ss, 0);

	std::cout << ss;

	return EXIT_SUCCESS;
}


void star(char* s, char* ss, int i)
{
	ss[2 * i] = s[i];

	if (s[i + 1] == 0)
	{
		return;
	}

	ss[2 * i + 1] = '*';

	star(s, ss, i + 1);
}