#include "stdafx.h"
#include "s3_dependances.h"

void s3_menu()
{
	char selector = 'a';															//main menu selector
	
	const unsigned int max_size = 50;									//maximal size of the array
	unsigned int size = 0;												//user-defined size of the array, 0 by default

	int* t_array = new int[max_size];									//t_array announcement
	int* sorted_array = new int[max_size];								//sorted array

	//states
	bool is_created = false;											//whether the array is created or not
	bool is_sorted = false;												//state of the array (sorted/not sorted)



	//menu loop
	do
	{
		cout << endl;
		cout << "----SEMINAR 3 MENU----" << endl;
		cout << " 1. Array input" << endl;
		cout << " 2. Sort the array" << endl;
		cout << " 3. Display the tasks" << endl;
		cout << " 5. Exit" << endl;
		cout << "Your selection: ";
		cin >> selector;


		switch (selector)
		{
			//input() is called
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
						//if 'y' re-enter <size>
						case 'y':
						{
							size = array_size(max_size); 
							input(t_array, size);																	//INPUT() is called -> t_array
							is_created = true;																		//array state change (creation)
							is_sorted = false;
							
							break;
						}

						//if 'n' do not change <size>
						case 'n': break;

						default: cout << "Wrong input, try again." << endl;
							break;
						}
					}
				}
				else
				{
					size = array_size(max_size);
					input(t_array, size);																	//INPUT() is called -> t_array
					is_created = true;																		//array state change (creation)
				}

				break;
			}

			//sort() is called
			case '2': 
			{
				if (is_created == false)
				{
					cout << "Error: The array is not created." << endl;
					break;
				}
				else
				{
					sorted_array = sort(t_array, size);																							//SORT() is called -> t_array
					is_sorted = true;
					break;
				}

			}

			//output() check and call
			case '3':
			{
				//check whether the array is created
				if (is_created == true)
				{
					if (is_sorted == true)
					{
						char o_sel = 'a';
						while ((o_sel != 'o') && (o_sel != 's') && (o_sel != 'c'))
						{
							cout << endl << "Do you want to use the original array, the sorted array or to cancel? (o/s/c): ";
							cin >> o_sel;

							switch (o_sel)
							{
								//OUTPUT() is called on the original array
							case 'o': output(t_array, size);			
								break;

								//OUTPUT() is called on the sorted array
							case 's': output(sorted_array, size);	
								break;

								//return to the menu
							case 'c': break;

							default: cout << "Wrong input, please try again." << endl;
								break;
							}
						}
					}
					else
					{
						//OUTPUT() is called
						output(t_array, size);	
						break;
					}
				}
				else
				{
					cout << "Error: The array is not created." << endl;
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

	
	//cout << endl << "Deleting the main array." << endl;//DEBUG
	delete[] t_array;																					//DELETE t_array[]
	//cout << "Deleting the sorted array." << endl;//DEBUG
	delete[] sorted_array;																				//DELETE sorted_array[]
	//cout << "Arrays deleted." << endl;//DEBUG
}