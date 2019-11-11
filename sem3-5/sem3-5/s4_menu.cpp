#include "stdafx.h"
#include "s4_dependances.h"

//S4_MENU()
int s4_menu()
{
	const unsigned int pre_alloc = 10;														//max size of the array, referenced in s4_array_size
	unsigned int dimension = 0;																//custom array dimensions, 0 by default
	
	//COMMIT f2841a8 - ALLOCATION CHANGE, USING PRE-DETERMINED MAX
	int** t_array = new int* [pre_alloc];													//main array allocation
	for (unsigned int i = 0; i < pre_alloc; i++)
		t_array[i] = new int [pre_alloc];
	//

	char selector = '0';																	//menu selector
	bool* is_created = new bool(false);														//array state (created)

	do
	{
		cout << endl;
		cout << "----SEMINAR 4 MENU----";
		
		cout << endl
			<< " 1. Enter the array" 
			<< endl
			<< " 2. Print the values"
			<< endl
			<< " 5. Exit" 
			<< endl;

		cout << "Your selection: ";
		cin >> selector;

		switch (selector)
		{
		//input() and dimension() are called
		case '1': 
		{
			dimension = array_size();														//dimension() handles the setting of the array size
			input(t_array, dimension, is_created);
		}
			break;

		//output() is called
		case '2': output(t_array, dimension, is_created);
			break;

		//return
		case '5': 
			break;

		default: cout << "Wrong input, try again." 
					<< endl;
			break;
		}

	} while (selector != '5');


	//array deletion
	cout << "Deleting the array"
		<< endl;
	for (unsigned int i = 0; i < pre_alloc; i++)
	{

		delete[] t_array[i];
	}
	delete[] t_array;
	cout << "Array deleted." 
		<< endl;

	delete is_created;

	return 0;
}