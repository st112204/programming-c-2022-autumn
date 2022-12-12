#include <iostream>

int middle = 0;

int count(char* s, int i);
void bracket_even(char* s, char* ss, int i);
void bracket_odd(char* s, char* ss, int i);

int main(int argc, char* argv[])
{
	char s[1001]{ 0 };
	char ss[2000]{ 0 };
	int length = 0;

	std::cin >> s;

	length = count(s, 0);
	middle = length / 2;

	if (length % 2 == 0)
	{
		bracket_even(s, ss, 0);
	}
	else
	{
		bracket_odd(s, ss, 0);
	}

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

void bracket_even(char* s, char* ss, int i)
{
	if (s[i] == 0)
	{
		return;
	}

	if (i < middle)
	{
		ss[2 * i] = '(';
		ss[2 * i + 1] = s[i];
	}
	else
	{
		ss[2 * i] = s[i];
		ss[2 * i + 1] = ')';
	}

	bracket_even(s, ss, i + 1);
}

void bracket_odd(char* s, char* ss, int i)
{
	if (s[i] == 0)
	{
		ss[2 * i] = ')';
		return;
	}

	if (i <= middle)
	{
		ss[2 * i] = '(';
		ss[2 * i + 1] = s[i];
	}
	else
	{
		ss[2 * i] = ')';
		ss[2 * i + 1] = s[i];
	}

	bracket_odd(s, ss, i + 1);
}