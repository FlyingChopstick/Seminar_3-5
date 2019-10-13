#include <iostream>
#include "s4_dependances.h"


int output(int** t_array, unsigned int dimension)
{
	unsigned int i, j;
	char selector = 'n';


	std::cout << "----OUTPUT----" << std::endl;

	identical(t_array, dimension);
	std::cout << std::endl;

	search(t_array, dimension);
	std::cout << std::endl;


	std::cout << "Do you want to see the array? (y/n):";
	std::cin >> selector;
	switch (selector)
	{
		//go back if 'n'
	case 'n':
	{
		std::cout << "----OUTPUT END----" << std::endl;
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
	
	}

	std::cout << "----OUTPUT END----" << std::endl;
	std::cout << std::endl;
	return 0;
}