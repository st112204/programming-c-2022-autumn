// N студентов дел€т K €блок нацело. —колько €блок у каждого студента?

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

int outputApplesPerStudent()
{
	int students = inputStudents(); // Documentation requires to ask students before apples
	int apples = inputApples();

	cout << "Apples per one student: " << endl;
	cout << apples / students << endl;

	return EXIT_SUCCESS;
}

int main()
{
	outputApplesPerStudent();

	return EXIT_SUCCESS;
}