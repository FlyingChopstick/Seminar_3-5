#include <iostream>
#include "s4_dependances.h"

//S4_OUTPUT()
int output(int** t_array, unsigned int* dimension, bool* is_created)
{
	unsigned int local_dimension = *dimension;
	unsigned int i, j;
	char selector = 'n';

	switch (*is_created)
	{
	case false: std::cout << "Error: Array was not created. You need to create and fill it first."
		<< std::endl;
		break;

	case true:
	{
		std::cout << std::endl 
			<< "----OUTPUT MENU----"
			<< std::endl;



		do
		{
			std::cout << " 1. Search for identical rows and columns"
				<< std::endl
				<< " 2. Sum the rows with the negative elements"
				<< std::endl
				<< " 3. Display the array"
				<< std::endl
				<< " 5. Return"
				<< std::endl;
			std::cin >> selector;

			switch (selector)
			{
			case '1': identical(t_array, local_dimension);
				break;

			case '2': search(t_array, local_dimension);
				break;

			case '3':
			{
				for (i = 0; i < local_dimension; i++)
				{
					for (j = 0; j < local_dimension; j++)
					{
						std::cout << t_array[i][j] << " ";
					}
					std::cout << std::endl;
				}
				std::cout << std::endl;
				break;
			}

			case '5':
			{
				std::cout << "----OUTPUT END----"
					<< std::endl;
				std::cout << std::endl;

				return 0;
			}

			default: std::cout << "Wrong input, please try again."
						<< std::endl;
				break;
			}

		} while (selector != '5');
	}

	}

	return 0;
}