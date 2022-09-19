// Поменять переменные местами

#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int tmp = 0;

	cout << "A: " << endl;
	cin >> a;
	cout << "B: " << endl;
	cin >> b;

	tmp = a;
	a = b;
	b = tmp;

	cout << "Swapped variables: " << endl;
	cout << a << " " << b << endl;

	return EXIT_SUCCESS;
}