#include "stdafx.h"
#include "s4_dependances.h"

//S4_MENU()
void s4_menu()
{
	const unsigned int max_dimension = 10;														//max size of the array, referenced in s4_array_size, s4_input
	unsigned int dimension = 0;																//custom array dimensions, 0 by default
	
	//COMMIT f2841a8 - ALLOCATION CHANGE, USING PRE-DETERMINED MAX
	int** t_array = new int* [max_dimension];													//main array allocation
	for (unsigned int i = 0; i < max_dimension; i++)
		t_array[i] = new int [max_dimension];
	//

	char selector = '0';																	//menu selector
	bool is_created = false;														//array state (created)


	cout << endl;
	cout << "----SEMINAR 4 MENU----";
	cout << endl;



	do
	{
		cout << " 1. Enter the array" << endl;
		cout << " 2. Display the tasks" << endl;
		cout << " 5. Exit" << endl;
		cout << "Your selection: ";
		cin >> selector;


		switch (selector)
		{
		//input() and dimension() are called
		case '1': 
		{
			//overwrite check
			if (is_created == true)
			{
				char selector = 'a';

				//overwrite confirmation
				cout << endl << "The array is already created. If you proceed it will be overwritten. Continue? (y/n)" << endl;
				while ((selector != 'y') && (selector != 'n'))
				{
					cout << "Your selection: ";
					cin >> selector;
					switch (selector)
					{
						//if 'y' re-enter <dimension>
					case 'y':
					{
						dimension = array_dimension(max_dimension);
						input(t_array, dimension);																//INPUT() is called -> t_array
						is_created = true;																		//array state change (creation)

						break;
					}

					//if 'n' do not change <dimension>
					case 'n': break;

					default: cout << "Wrong input, try again." << endl;
						break;
					}
				}
			}
			else
			{
				dimension = array_dimension(max_dimension);
				input(t_array, dimension);																	//INPUT() is called -> t_array
				is_created = true;																		//array state change (creation)
			}

			cout << endl;
			break;
		}

		//output() is called
		case '2': 
		{
			if (is_created == true)
				output(t_array, dimension);
			else
			{
				cout << "Error: The array is not created.";
			}

			cout << endl;
			break;
		}

		//return
		case '5': 
			break;

		default: cout << "Wrong input, try again." << endl;
			break;
		}

	} while (selector != '5');


	//array deletion
	//cout << endl << "Deleting the array." << endl;//DEBUG
	for (unsigned int i = 0; i < max_dimension; i++)
	{
		delete[] t_array[i];
	}
	delete[] t_array;
	//cout << "Array deleted." << endl;//DEBUG
}