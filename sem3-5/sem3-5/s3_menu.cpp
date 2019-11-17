#include "stdafx.h"
#include "s3_dependances.h"

int s3_menu()
{
	//variables	
	const unsigned int default_size = 10;
	char selector = '0';															//main menu selector
	unsigned int size = 0;										//the size of the array, 0 by default
	int* t_array = new int[default_size];															//t_array announcement
	bool* is_created = new bool(false);												//whether the array is created or not
	//bool* is_sorted = new bool(false);												//state of the array (sorted/not sorted)
	bool* two_negatives = new bool(false);											//whether there are two negatives in the array




	//menu loop
	do
	{
		cout << endl;
		cout << "----SEMINAR 3 MENU----" << endl;
		cout << " 1. Array input" << endl;
		cout << " 2. Sort the array" << endl;
		cout << " 3. Print the values" << endl;
		cout << " 5. Exit" << endl;
		cout << "Your selection: ";
		cin >> selector;

		switch (selector)
		{
			//input() is called
			case '1': 
			{
				size = array_size(t_array, size, is_created);
				delete[] t_array;
				t_array = new int[size];
				input(t_array, size, is_created);																										//INPUT() is called -> t_array
				
				
				break;
			}

			//sort() is called
			case '2': sort(t_array, size, is_created);																							//SORT() is called -> t_array
				break;
			
			//output() check and call
			case '3':
			{
				//check whether the array is created
				switch (*is_created)
				{
					//if true, output() is called
				case true: output(t_array, size, is_created, two_negatives);	//OUTPUT() is called
					break;
				case false: cout << "Error: The array is not created." << endl;
					break;
				}
			}

			//return
			case '5': 
				break;

			default: cout << "Wrong input, try again." << endl;
				break;
		}

	} while (selector != '5');

	cout << endl << "Deleting the array." << endl;													//DELETE t_array[]
	delete[] t_array;	
	cout << "Array deleted." << endl;



	delete is_created;
	delete two_negatives;


	return 0;
}