#include "stdafx.h"
#include "s3_dependances.h"

//int OUTPUT() -> 0, handles the output of the values and the array
void output(const int* t_array, unsigned int size)
{
	int* borders = new int[2];

	char selector = '0';


	cout << endl;
	cout << "----OUTPUT MENU----";
	cout << endl;
	   

	do
	{
		cout << " 1. The greatest element" << endl;
		cout << " 2. The product of the elements between zeroes" << endl;
		cout << " 3. Array output" << endl;
		cout << " 5. Return" << endl;
		cout << "Your selection: ";
		cin >> selector;

		switch (selector)
		{
		//max_pos calculation
		case '1':
		{
			unsigned int max_pos = max_position(t_array, size);
			cout << endl << "The position of the greatest element is #" << max_pos << " (" << t_array[max_pos] << ")";
			cout << endl;
			break;
		}

		//product calculation
		case '2':
		{
			borders = product(t_array, size);
			display_product(t_array, borders);

			break;
		}

		//array output
		case'3':
		{
			display_array(t_array, size);

			break;
		}

		//return
		case '5': break;

		default: cout << "Wrong input, please try again."
			<< endl;
		}

	} while (selector != '5');

	
	delete[] borders;

	cout << endl;
	cout << "----OUTPUT END----";
	cout << endl;
}