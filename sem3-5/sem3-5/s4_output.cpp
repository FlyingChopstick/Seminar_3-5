#include <iostream>
#include "s4_dependances.h"

//S4_OUTPUT()
int output(int** t_array, unsigned int dimension, bool* is_created)
{
	unsigned int i, j;
	char selector = 'n';

	switch (*is_created)
	{
	case false: std::cout << "Error: Array was not created. You need to load it first."
					<< std::endl;
		break;

	case true:
	{
		std::cout << "----OUTPUT----" 
			<< std::endl;

		identical(t_array, dimension);
		std::cout << std::endl;

		search(t_array, dimension);
		std::cout << std::endl;


		std::cout << "Do you want to see the array? (y/n):";
		
		do
		{
			std::cin >> selector;

			switch (selector)
			{
				//go back if 'n'
			case 'n':
			{
				std::cout << "----OUTPUT END----" 
					<< std::endl;
				return 0;

				break;
			}

			//proceed if 'y'
			case 'y':
			{

				for (i = 0; i < dimension; i++)
				{
					for (j = 0; j < dimension; j++)
					{
						std::cout << t_array[i][j] << " ";
					}
					std::cout << std::endl;
				}
				std::cout << std::endl;

				break;
			}

			default: std::cout << "Wrong input, please try again" 
						<< std::endl;
				break;
			}
		} while ((selector != 'y') && (selector != 'n'));

		std::cout << "----OUTPUT END----" 
			<< std::endl;
		std::cout << std::endl;

		break;
	}

	}
	
	return 0;
}