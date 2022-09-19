// N студентов дел€т K €блок нацело. —колько €блок в остатке?

#include <iostream>

using namespace std;

int inputStudents()
{
	int students = 0;

	cout << "Enter the number of students: " << endl;
	cin >> students;

	return students;
}

int inputApples()
{
	int apples = 0;

	cout << "Enter the number of apples: " << endl;
	cin >> apples;

	return apples;
}

int outputApplesLeft()
{
	int students = inputStudents(); // Documentation requires to ask students before apples
	int apples = inputApples();

	cout << "Apples left: " << endl;
	cout << apples % students << endl;

	return EXIT_SUCCESS;
}

int main()
{
	outputApplesLeft();

	return EXIT_SUCCESS;
}