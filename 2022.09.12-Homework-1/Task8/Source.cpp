// ¬рем€ в секундах между двум€ моментами времени

#include <iostream>

using namespace std;

int calculateSeconds(int hour1, int min1, int sec1, int hour2, int min2, int sec2)
{
	return (hour2 - hour1) * 3600 + (min2 - min1) * 60 + (sec2 - sec1);
}

int main()
{
	int hour1 = 0;
	int min1 = 0;
	int sec1 = 0;
	int hour2 = 0;
	int min2 = 0;
	int sec2 = 0;

	cout << "hour 1: " << endl;
	cin >> hour1;
	cout << "min. 1: " << endl;
	cin >> min1;
	cout << "sec. 1: " << endl;
	cin >> sec1;

	cout << "\n" << endl;

	cout << "hour 2: " << endl;
	cin >> hour2;
	cout << "min. 2: " << endl;
	cin >> min2;
	cout << "sec. 2: " << endl;
	cin >> sec2;

	cout << "\nTime between two moments in seconds: " << endl;
	cout << calculateSeconds(hour1, min1, sec1, hour2, min2, sec2) << endl;

	return EXIT_SUCCESS;
}


/*

// Solution with pointers looks more simple

#include <iostream>

using namespace std;

int inputTime(int* time1, int* time2)
{
	cout << "hour 1: " << endl;
	cin >> time1[0];
	cout << "min. 1: " << endl;
	cin >> time1[1];
	cout << "sec. 1: " << endl;
	cin >> time1[2];

	cout << "\n" << endl;

	cout << "hour 2: " << endl;
	cin >> time2[0];
	cout << "min. 2: " << endl;
	cin >> time2[1];
	cout << "sec. 2: " << endl;
	cin >> time2[2];

	cout << "\n---------------------\n" << endl;

	return EXIT_SUCCESS;
}

int calculateSeconds(int* time1, int* time2)
{
	return (time2[0] - time1[0]) * 3600 + (time2[1] - time1[1]) * 60 + (time2[2] - time1[2]);
}

int main()
{
	int time1[3] = { 0, 0, 0 };
	int time2[3] = { 0, 0, 0 };

	inputTime(time1, time2);
	cout << calculateSeconds(time1, time2) << endl;

	return EXIT_SUCCESS;
}
*/