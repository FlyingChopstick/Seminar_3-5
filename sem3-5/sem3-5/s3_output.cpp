#include "stdafx.h"
#include "s3_dependances.h"

//int OUTPUT() -> 0, handles the output of the values and the array
int output(const int* t_array, unsigned int size)
{
	cout << endl;
	cout << "----OUTPUT----";
	cout << endl;

	//unsigned int i;
	char selector = '0';

	cout
		<< " 1. The greatest element"
		<< endl
		<< " 2. The product of the elements between zeroes"
		<< endl
		<< " 3. Array output"
		<< endl
		<< " 5. Return"
		<< endl;
	do
	{
		cout << "Your selection: ";
		cin >> selector;

		switch (selector)
		{
			//max_pos output
		case '1':
		{
			unsigned int max_pos = max_position(t_array, size);
			cout << endl
				<< "The position of the greatest element is #" << max_pos << " (" << t_array[max_pos] << ")"
				<< endl;
			break;
		}
		//n_product output
		case '2':
		{
			int n_product = product(t_array, size);
			//if (*two_negatives == true)
	
			break;
			/**
			switch (*two_negatives)
			{
			case true: 
				break;
			case false: cout << endl << "There are no 0 elements or only one 0 element in the array."
				<< endl;
				break;
			}
			break;
			/**/
		}

		//array output
		case'3':
		{
			unsigned int i;

			cout << endl
				<< "Array output: ";
			for (i = 0; i < size; i++)
			{
				cout << t_array[i] << " ";
			}
			cout << endl;

			break;
		}

		//return
		case '5': return 0;

		default: cout << "Wrong input, please try again."
			<< endl;
		}
	} while (selector != '5');


	cout << endl;
	cout << "----OUTPUT END----";
	cout << endl;

	return 0;
}