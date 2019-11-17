#include "stdafx.h"
#include <fstream>
#include "s4_dependances.h"

using std::ifstream;

//INPUT() -> **t_array, fills the array 
int** input(int** t_array, unsigned int dimension, unsigned int pre_alloc, bool* is_created) 
{
	if (*is_created == true) return t_array;

	//unsigned int local_dimension = *dimension;
	//int n = 0;
	unsigned int i, j;
	char selector = '0';

	//t_array = new int* [local_dimension];

	const unsigned int filename_size = 64;
	char filename[filename_size];
	ifstream input_file;


	cout << endl;
	cout << "----INPUT----" << endl;

	do
	{
		cout << " 1. Enter the array from the keyboard "
			<< endl
			<< " 2. Read the array from the file"
			<< endl
			<< "Your selection: ";
		cin >> selector;

		switch (selector)
		{
		//from the file
		case '2': 
		{
			do
			{
				cout << "Specify the name of the file (max. " << filename_size << " symbols): ";
				cin >> filename;

				cout << "Opening the file..." << endl;
				input_file.open(filename);
				if (!input_file) cout << "Error: Could not open the file specified."
					<< endl;

			} while (!input_file);

			cout << "File was successfully opened, reading..." << endl;

			for (i = 0; i < dimension; i++)
			{
				for (j = 0; j < dimension; j++)
				{
					input_file >> t_array[i][j];
					if (!input_file)
					{
						cout << "Error: could not read the element, returning to the menu."
							<< endl;
						return 0;
					}
				}
			}

			cout << "The file was read successfully.";
			cout << endl;
			*is_created = true;

			input_file.close();

			break;
		}

		//from the keyboard
		case '1':
		{
			for (i = 0; i < dimension; i++)
			{
				for (j = 0; j < dimension; j++)
				{
					cout << "Enter the element [" << i << "][" << j << "]: ";
					cin >> t_array[i][j];
					cout << endl;
				}
			}

			*is_created = true;

			break;
		}

		//return
		case '5': break;

		default: cout << "Wrong input, please try again"
					<< endl;
			break;
		}

	} while (*is_created != true);
	

	cout << endl;
	cout << "----INPUT END----";
	cout << endl;


	return t_array;
}