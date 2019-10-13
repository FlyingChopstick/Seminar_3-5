#include <iostream>
#include <fstream>

//int input(int* &t_array) 
int** input(int** &t_array, unsigned int dimension) {
	const unsigned int filename_size = 64;
	char filename[filename_size];
	unsigned int i, j;

	std::ifstream input_file;

	t_array = new int*[dimension];
	for (i = 0; i < dimension; i++)
	{
		for (j = 0; j < dimension; j++)
		{
			t_array[i] = new int[j];
		}
	}

	std::cout << std::endl;
	std::cout << "----INPUT----" << std::endl;

	do
	{
		std::cout << "Specify the name of the file (max. " << filename_size << " symbols): ";
		std::cin >> filename;

		std::cout << "Opening the file..." << std::endl;
		input_file.open(filename);
		if (!input_file) std::cout << "Error: Could not open the file specified." << std::endl;
	} while (!input_file);

	std::cout << "File was successfully opened, reading..." << std::endl;

	for (i = 0; i < dimension; i++)
	{
		for (j = 0; j < dimension; j++)
		{
			input_file >> t_array[i][j];
			if (!input_file)
			{
				std::cout << "Error: could not read the element, returning to the menu." << std::endl;
				return 0;
			}
		}
	}

	std::cout << "The file was read successfully.";
	std::cout << std::endl;

	input_file.close();

	std::cout << "----INPUT END----" << std::endl;
	std::cout << std::endl;
	return t_array;
}