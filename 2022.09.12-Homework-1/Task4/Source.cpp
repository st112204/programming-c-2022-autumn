// �� ����� ������� ��� ������ 109 ����� ����� T ����������� ������ ����, ������� �������� �� ����� 0 �� ��������� V

#include <iostream>

using namespace std;

int inputV()
{
	int V = 0;

	cout << "V: " << endl;
	cin >> V;

	return V;
}

int inputT()
{
	int T = 0;

	cout << "T: " << endl;
	cin >> T;

	return T;
}

int outputPoint(int T, int V)
{
	cout << "Coordinate: " << endl;
	cout << ((V * T) % 109 + 109) % 109 << endl;

	return EXIT_SUCCESS;
}

int main()
{
	outputPoint(inputT(), inputV());

	return EXIT_SUCCESS;
}