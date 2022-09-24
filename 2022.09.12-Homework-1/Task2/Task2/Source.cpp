// N студентов дел€т K €блок нацело. —колько €блок у каждого студента?

#include <iostream>

int inputStudents()
{
	int students = 0;

	std::cout << "Enter the number of students: " << std::endl;
	std::cin >> students;

	return students;
}

int inputApples()
{
	int apples = 0;

	std::cout << "Enter the number of apples: " << std::endl;
	std::cin >> apples;

	return apples;
}

int outputApplesPerStudent()
{
	int students = 0;
	int apples = 0;

	students = inputStudents(); // Documentation requires to ask students before apples
	apples = inputApples();

	std::cout << "Apples per one student: " << std::endl;
	std::cout << apples / students << std::endl;

	return EXIT_SUCCESS;
}

 int main(int argc, char* argv[])
{
	outputApplesPerStudent();

	return EXIT_SUCCESS;
}