#include <iostream>
#include "s3_dependances.h"

int s3_menu()
{
	//variables	
	char selector = '0';															//main menu selector
	unsigned int* size = new unsigned int(0);										//the size of the array, 0 by default
	int* t_array = NULL;															//t_array announcement
	bool* is_created = new bool(false);												//whether the array is created or not
	bool* is_sorted = new bool(false);												//state of the array (sorted/not sorted)
	bool* two_negatives = new bool(false);											//whether there are two negatives in the array




	//menu loop
	do
	{
		std::cout << std::endl;
		std::cout << "----SEMINAR 3 MENU----" << std::endl;
		std::cout << " 1. Array input" << std::endl;
		std::cout << " 2. Sort the array" << std::endl;
		std::cout << " 3. Print the values" << std::endl;
		std::cout << " 5. Exit" << std::endl;
		std::cout << "Your selection: ";
		std::cin >> selector;

		switch (selector)
		{
			//input() is called
			case '1': input(t_array, size, is_created);																										//INPUT() is called -> t_array
				break;

			//sort() is called
			case '2': sort(t_array, size, is_created, is_sorted);																							//SORT() is called -> t_array
				break;
			
			//output() check and call
			case '3':
			{
				//check whether the array is created
				switch (*is_created)
				{
					//if true, output() is called
				case true: output(max_position(t_array, size), product(t_array, size, two_negatives), t_array, size, is_created, two_negatives, is_sorted);	//OUTPUT() is called
					break;
				case false: std::cout << "Error: The array is not created." << std::endl;
					break;
				}
			}

			//return
			case '5': 
				break;

			default: std::cout << "Wrong input, try again." << std::endl;
				break;
		}

	} while (selector != '5');


	delete[] t_array;	
	//std::cout << std::endl << "Array deleted." << std::endl;													//DELETE t_array[]


	delete is_created;
	delete is_sorted;
	delete two_negatives;


	return 0;
}