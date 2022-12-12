// JUST FOR FUN

#include <iostream>

int n0 = 0;

int new_location(int n, int location);
int moves_by_number(int n);
int number_by_moves(int moves);
void fill(int* mas, int moves);


int main(int argc, char* argv[])
{
	int n = 0; // discs at all
	int moves = 0; // moves at all
	int** discs_location = nullptr; // array of discs locations (by nubmer of disc)
	int* discs_relocate_sequence = nullptr; // sequence of discs relocation

	std::cin >> n;

	n0 = n;

	discs_location = new int*[n]{ nullptr };
	for (int i = 0; i < n; ++i)
	{
		*(discs_location + i) = new int[1]{ 1 }; // start location == 1, number of discs == n
	}
	
	moves = moves_by_number(n);

	discs_relocate_sequence = new int[moves]{ 0 };
	fill(discs_relocate_sequence, moves);

	// WOW OMG COOL AMAZING!!!111!!!1!!
	// WE KNOW THE ORDER OF ALL RELOCATED DISCS AND THE RULE OF RELOCATION
	for (int i = 0; i < moves; ++i)
	{
		int disc = *(discs_relocate_sequence + i);
		int location = **(discs_location + disc - 1);

		std::cout
			<< "Disk " << disc
			<< " move from " << location
			<< " to " << new_location(disc, location) << "\n";

		**(discs_location + disc - 1) = new_location(disc, location);
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] *(discs_location + i);
	}
	delete[] discs_location;

	delete[] discs_relocate_sequence;

	return EXIT_SUCCESS;
}


// the rule of current disc relocation, interesting regularity:
// n -- current disc number, n0 -- number of discs at all
int new_location(int n, int location)
{
	// ( -> 1 -> 2 -> 3 -> )
	if ((n + n0) % 2 == 0)
	{
		if (location == 3)
		{
			return 1;
		}
		else
		{
			return ++location;
		}
	}
	// ( -> 3 -> 2 -> 1 -> )
	else
	{
		if (location == 1)
		{
			return 3;
		}
		else
		{
			return --location;
		}
	}
}

// number of moves for a given number of discs
int moves_by_number(int n)
{
	if (n == 1)
	{
		return 1;
	}

	return 2 * moves_by_number(n - 1) + 1;
}

// "moves_by_number" REVERSE -- number of discs for a given number of moves
int number_by_moves(int moves)
{
	if (moves == 1)
	{
		return 1;
	}

	return number_by_moves((moves - 1) / 2) + 1;
}

// my favorite: fill the discs_relocate_sequence
void fill(int* mas, int moves)
{
	if (moves == 1)
	{
		*mas = 1;
		return;
	}

	int middle = moves / 2;

	fill(mas, middle);
	*(mas + middle) = number_by_moves(moves);
	for (int i = middle + 1; i < moves; ++i)
	{
		*(mas + i) = *(mas + i - (middle + 1));
	}
}