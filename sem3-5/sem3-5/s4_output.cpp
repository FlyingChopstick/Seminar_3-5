//#include <iostream>
#include "stdafx.h"

#include "s4_dependances.h"

//OUTPUT() -> 0, handles output of the values and the array
int output(int** t_array, unsigned int dimension, bool* is_created)
{
	//unsigned int local_dimension = *dimension;
	unsigned int i, j;
	char selector = 'n';

	int* results = new int[dimension];

	switch (*is_created)
	{
	case false: cout << "Error: Array was not created. You need to create and fill it first."
		<< endl;
		break;

	case true:
	{
		cout << endl 
			<< "----OUTPUT MENU----"<< endl;

		do
		{
			cout << " 1. Search for identical rows and columns" << endl
				<< " 2. Sum the rows with the negative elements" << endl
				<< " 3. Display the array" << endl
				<< " 5. Return" << endl;
			cout << "Your selection: ";
			cin >> selector;

			switch (selector)
			{
			case '1': identical(t_array, dimension);
				cout << endl; 
				break;

			case '2': search(t_array, dimension);
				cout << endl;
				break;

			case '3':
			{
				for (i = 0; i < dimension; i++)
				{
					for (j = 0; j < dimension; j++)
					{
						cout << t_array[i][j] << "	";
					}
					cout << endl;
				}
				cout << endl;
				break;
			}

			case '5':
			{
				cout << "----OUTPUT END----"
					<< endl;
				cout << endl;

				return 0;
			}

			default: cout << "Wrong input, please try again." << endl;
				break;
			}

		} while (selector != '5');
	}

	}

	return 0;
}