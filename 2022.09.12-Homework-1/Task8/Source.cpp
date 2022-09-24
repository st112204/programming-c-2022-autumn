// ¬рем€ в секундах между двум€ моментами времени

#include <iostream>

int calculateSeconds(int hour1, int min1, int sec1, int hour2, int min2, int sec2)
{
	return (hour2 - hour1) * 3600 + (min2 - min1) * 60 + (sec2 - sec1);
}

 int main(int argc, char* argv[])
{
	int hour1 = 0;
	int min1 = 0;
	int sec1 = 0;
	int hour2 = 0;
	int min2 = 0;
	int sec2 = 0;

	std::cout << "hour 1: " << std::endl;
	std::cin >> hour1;
	std::cout << "min. 1: " << std::endl;
	std::cin >> min1;
	std::cout << "sec. 1: " << std::endl;
	std::cin >> sec1;

	std::cout << "\n" << std::endl;

	std::cout << "hour 2: " << std::endl;
	std::cin >> hour2;
	std::cout << "min. 2: " << std::endl;
	std::cin >> min2;
	std::cout << "sec. 2: " << std::endl;
	std::cin >> sec2;

	std::cout << "\nTime between two moments in seconds: " << std::endl;
	std::cout << calculateSeconds(hour1, min1, sec1, hour2, min2, sec2) << std::endl;

	return EXIT_SUCCESS;
}


/*

// Solution with pointers looks more simple

#include <iostream>

using namespace std;

int inputTime(int* time1, int* time2)
{
	std::cout << "hour 1: " << std::endl;
	std::cin >> time1[0];
	std::cout << "min. 1: " << std::endl;
	std::cin >> time1[1];
	std::cout << "sec. 1: " << std::endl;
	std::cin >> time1[2];

	std::cout << "\n" << std::endl;

	std::cout << "hour 2: " << std::endl;
	std::cin >> time2[0];
	std::cout << "min. 2: " << std::endl;
	std::cin >> time2[1];
	std::cout << "sec. 2: " << std::endl;
	std::cin >> time2[2];

	std::cout << "\n---------------------\n" << std::endl;

	return EXIT_SUCCESS;
}

int calculateSeconds(int* time1, int* time2)
{
	return (time2[0] - time1[0]) * 3600 + (time2[1] - time1[1]) * 60 + (time2[2] - time1[2]);
}

 int main(int argc, char* argv[])
{
	int time1[3] = { 0, 0, 0 };
	int time2[3] = { 0, 0, 0 };

	inputTime(time1, time2);
	std::cout << calculateSeconds(time1, time2) << std::endl;

	return EXIT_SUCCESS;
}
*/