#include "stdafx.h"
#include "s3_dependances.h"

//int OUTPUT() -> 0, handles the output of the values and the array
int output(const int* t_array, unsigned int size, bool* is_created, bool* two_negatives)
{
	cout << endl;
	cout << "----OUTPUT----";
	cout << endl;

	//check whether the array is created
	switch (*is_created)
	{
		//if true output
	case true:
	{
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
				int n_product = product(t_array, size, two_negatives);
				switch (*two_negatives)
				{
				case true: cout << endl
					<< "The product of the elements between the first and the second 0 is " << n_product << endl;
					break;
				case false: cout << endl << "There are no 0 elements or only one 0 element in the array."
					<< endl;
					break;
				}
				break;
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

		break;
	}

	//if false go back
	case false: cout << "Array was not created. You need to input first.";
		break;
	}

	cout 
		<< endl
		<< "----OUTPUT END----"
		<< endl;

	return 0;
}