#include <iostream>
#include <fstream>

//int input(int* &t_array) 
int** input(int**& t_array, unsigned int* dimension, bool* is_created) 
{
	//unsigned int local_dimension = *dimension;

	unsigned int i, j;
	char selector = '0';

	//t_array = new int* [local_dimension];

	const unsigned int filename_size = 64;
	char filename[filename_size];
	std::ifstream input_file;


	std::cout << std::endl;
	std::cout << "----INPUT----" << std::endl;

	std::cout << "Enter the size of the array (NxN): ";
	std::cin >> *dimension;
	t_array = new int* [*dimension];
	for (i = 0; i < *dimension; i++)
	{
		for (j = 0; j < *dimension; j++)
		{
			t_array[i] = new int[j];
		}
	}




	do
	{
		std::cout << " 1. Read the array from the file"
			<< std::endl
			<< " 2. Enter the array from the keyboard"
			<< std::endl
			<< "Your selection: ";
		std::cin >> selector;

		switch (selector)
		{
		//from the file
		case '1': 
		{
			do
			{
				std::cout << "Specify the name of the file (max. " << filename_size << " symbols): ";
				std::cin >> filename;

				std::cout << "Opening the file..." << std::endl;
				input_file.open(filename);
				if (!input_file) std::cout << "Error: Could not open the file specified."
					<< std::endl;

			} while (!input_file);

			std::cout << "File was successfully opened, reading..." << std::endl;

			for (i = 0; i < *dimension; i++)
			{
				for (j = 0; j < *dimension; j++)
				{
					input_file >> t_array[i][j];
					if (!input_file)
					{
						std::cout << "Error: could not read the element, returning to the menu."
							<< std::endl;
						return 0;
					}
				}
			}

			std::cout << "The file was read successfully.";
			std::cout << std::endl;
			*is_created = true;

			input_file.close();

			break;
		}

		//from the keyboard
		case '2':
		{
			for (i = 0; i < *dimension; i++)
			{
				for (j = 0; j < *dimension; j++)
				{
					std::cout << "Enter the element [" << i << "][" << j << "]: ";
					std::cin >> t_array[i][j];
					std::cout << std::endl;
				}
			}

			*is_created = true;

			break;
		}

		//return
		case '5': break;

		default: std::cout << "Wrong input, please try again"
					<< std::endl;
			break;
		}

	} while (*is_created != true);
	

	std::cout << std::endl;
	std::cout << "----INPUT END----";
	std::cout << std::endl;


	return t_array;
}