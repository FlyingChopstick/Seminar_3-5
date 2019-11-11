#include "stdafx.h"
#include "s4_dependances.h"

//S4_MENU()
int s4_menu()
{
	unsigned int dimension = 0;
	int** t_array = new int* [10];																	//main array
	for (unsigned int i = 0; i < 10; i++)
		t_array[i] = new int [10];

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
		//input() is called
		case '1': 
		{

			//t_array = new int*[dimension];
			//for (unsigned int i =0; i)
			//delete[] t_array;
			dimension = array_size();
			
			//t_array = new int* [dimension];																	//main array
			//for (unsigned int i = 0; i < dimension; i++)
			//	t_array[i] = new int[2];

			//for (unsigned int i = 0; i < dimension; i++)
			//	t_array[i] = new int [dimension];

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


	cout << "Deleting the array"
		<< endl;
	/**/
	for (unsigned int i = 0; i < 10 ; i++)
	{
		//cout << "Deleting the " << i << " element (" << t_array[i][0] << ")"
		//	<< endl;
		delete[] t_array[i];
	}
	/**/
	delete[] t_array;
	cout << "Array deleted." 
		<< endl;

	//delete[] dimension;
	delete is_created;

	return 0;
}