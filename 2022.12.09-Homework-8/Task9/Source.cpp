#include <iostream>

int middle = 0;
int unique = 0;

int count(char* s, int i);
int count_and_remove_repetitions(char* s, int i, int len);
void remove_spaces(char* s, char* ss, int i, int uni);


int main(int argc, char* argv[])
{
	char s[1001]{ 0 };
	char ss[1001]{ 0 };
	int length = 0;
	int repetitions = 0;

	std::cin >> s;

	length = count(s, 0);
	middle = length / 2;
	repetitions = count_and_remove_repetitions(s, 0, length);
	unique = length - 2 * repetitions;
	remove_spaces(s, ss, 0, unique);

	std::cout << ss;

	return EXIT_SUCCESS;
}


int count(char* s, int i)
{
	if (s[i] == 0)
	{
		return 0;
	}

	return count(s, i + 1) + 1;
}

int count_and_remove_repetitions(char* s, int i, int len)
{
	if (i == middle)
	{
		return 0;
	}

	if (s[i] == s[len - 1])
	{
		s[i] = 0;
		s[len - 1] = 0;
		return 1 + count_and_remove_repetitions(s, i + 1, len - 1);
	}
	else
	{
		return count_and_remove_repetitions(s, i + 1, len - 1);
	}
}

void remove_spaces(char* s, char* ss, int i, int uni)
{
	if (uni == 0)
	{
		return;
	}

	if (s[i] != 0)
	{
		ss[unique - uni] = s[i];
		remove_spaces(s, ss, i + 1, uni - 1);
	}
	else
	{
		remove_spaces(s, ss, i + 1, uni);
	}
}