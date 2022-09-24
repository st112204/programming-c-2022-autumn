// N студентов дел€т K €блок нацело. —колько €блок в остатке?

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

int outputApplesLeft()
{
	int students = 0;
	int apples = 0;

	students = inputStudents(); // Documentation requires to ask students before apples
	apples = inputApples();

	std::cout << "Apples left: " << std::endl;
	std::cout << apples % students << std::endl;

	return EXIT_SUCCESS;
}

 int main(int argc, char* argv[])
{
	outputApplesLeft();

	return EXIT_SUCCESS;
}