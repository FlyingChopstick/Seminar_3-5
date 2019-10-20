#include <iostream>
#include "s4_dependances.h"

//S4_MENU()
int s4_menu()
{
	unsigned int* dimension = new unsigned int(0);
	int **t_array = NULL;
	char selector = '0';
	bool* is_created = new bool(false);

	do
	{
		std::cout << std::endl;
		std::cout << "----SEMINAR 4 MENU----"
			<< std::endl;
		std::cout << " 1. Enter the array" 
			<< std::endl;
		std::cout << " 2. Print the values"
			<< std::endl;
		std::cout << " 5. Exit" 
			<< std::endl;
		std::cout << "Your selection: ";
		std::cin >> selector;

		switch (selector)
		{
		//input() is called
		case '1': input(t_array, dimension, is_created);
			break;

		//output() is called
		case '2': output(t_array, dimension, is_created);
			break;

		//return
		case '5': 
			break;

		default: std::cout << "Wrong input, try again." 
					<< std::endl;
			break;
		}

	} while (selector != '5');

	delete dimension;
	delete is_created;

	return 0;
}