#include "stdafx.h"
#include "s3_dependances.h"
#include "s4_dependances.h"
#include "s5_dependances.h"


int main() 
{
	char selector = '0';
	
	do
	{

		std::cout << "-----MAIN MENU-----" << std::endl;
		std::cout << " 1. Seminar 3" << std::endl;
		std::cout << " 2. Seminar 4" << std::endl;
		std::cout << " 3. Seminar 5" << std::endl;
		std::cout << " 7. Exit" << std::endl;
		std::cout << "Select the task: ";
		std::cin >> selector;

		switch (selector)
		{
		case '1': s3_main(); std::cout << std::endl;
			break;
		case '2': s4_main(); std::cout << std::endl;
			break;
		case '3': s5_main(); std::cout << std::endl;
			break;

		case '7':
		{
			return 0;
		}
		break;

		default: std::cout << "Wrong input. ";
			break;
		}
	} while (selector != '7');

	std::cout << std::endl;
	system("pause");
	return 0;
}
