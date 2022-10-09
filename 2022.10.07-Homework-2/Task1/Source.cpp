// bananas

#include <iostream>

int main(int argc, char* argv[])
{
	short n = 0;
	char hundreds = 0;
	char tens = 0;
	char ones = 0;

	std::cin >> n;

	hundreds = n % 1000 / 100;
	tens = n % 100 / 10;
	ones = n % 10;

	// number output

	switch (hundreds)
	{
	case 0:
	{
		break;
	}
	case 1:
	{
		std::cout << "sto ";
		break;
	}
	case 2:
	{
		std::cout << "dvesti ";
		break;
	}
	case 3:
	{
		std::cout << "trista ";
		break;
	}
	case 4:
	{
		std::cout << "chetyresta ";
		break;
	}
	case 5:
	{
		std::cout << "pyat'sot ";
		break;
	}
	case 6:
	{
		std::cout << "shest'sot ";
		break;
	}
	case 7:
	{
		std::cout << "sem'sot ";
		break;
	}
	case 8:
	{
		std::cout << "vosem'sot ";
		break;
	}
	case 9:
	{
		std::cout << "devyat'sot ";
		break;
	}
	}

	switch (tens)
	{
	case 0:
	{
		break;
	}
	case 1:
	{
		switch (ones)
		{
		case 0:
		{
			std::cout << "desyat' ";
			break;
		}
		case 1:
		{
			std::cout << "odinnadtcat' ";
			break;
		}
		case 2:
		{
			std::cout << "dvenadcat' ";
			break;
		}
		case 3:
		{
			std::cout << "trinadtcat' ";
			break;
		}
		case 4:
		{
			std::cout << "chetyrnadtcat' ";
			break;
		}
		case 5:
		{
			std::cout << "pyatnadtcat' ";
			break;
		}
		case 6:
		{
			std::cout << "shestnadtcat' ";
			break;
		}
		case 7:
		{
			std::cout << "semnadtcat' ";
			break;
		}
		case 8:
		{
			std::cout << "vosemnadtcat' ";
			break;
		}
		case 9:
		{
			std::cout << "devyatnadtcat' ";
			break;
		}
		}
		break;
	}
	case 2:
	{
		std::cout << "dvadtcat' ";
		break;
	}
	case 3:
	{
		std::cout << "tridtcat' ";
		break;
	}
	case 4:
	{
		std::cout << "sorok ";
		break;
	}
	case 5:
	{
		std::cout << "pyat'desyat ";
		break;
	}
	case 6:
	{
		std::cout << "shest'desyat ";
		break;
	}
	case 7:
	{
		std::cout << "sem'desyat ";
		break;
	}
	case 8:
	{
		std::cout << "vosem'desyat ";
		break;
	}
	case 9:
	{
		std::cout << "devyanosto ";
		break;
	}
	}

	if (tens != 1)
	{
		switch (ones)
		{
		case 0:
		{
			break;
		}
		case 1:
		{
			std::cout << "odin ";
			break;
		}
		case 2:
		{
			std::cout << "dva ";
			break;
		}
		case 3:
		{
			std::cout << "tri ";
			break;
		}
		case 4:
		{
			std::cout << "chetyre ";
			break;
		}
		case 5:
		{
			std::cout << "pyat' ";
			break;
		}
		case 6:
		{
			std::cout << "shest' ";
			break;
		}
		case 7:
		{
			std::cout << "sem' ";
			break;
		}
		case 8:
		{
			std::cout << "vosem' ";
			break;
		}
		case 9:
		{
			std::cout << "devyat' ";
			break;
		}
		}
	}

	if (n % 1000 == 0)
	{
		std::cout << "nol' ";
	}

	// bananas output

	if (tens == 1)
	{
		std::cout << "bananov" << std::endl;
	}
	else
	{
		switch (ones)
		{
		case 1:
		{
			std::cout << "banan" << std::endl;
			break;
		}
		case 2:
		case 3:
		case 4:
		{
			std::cout << "banana" << std::endl;
			break;
		}
		default:
		{
			std::cout << "bananov" << std::endl;
			break;
		}
		}
	}

	return EXIT_SUCCESS;
}