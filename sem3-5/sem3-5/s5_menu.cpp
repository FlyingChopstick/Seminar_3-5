#include "stdafx.h"
#include "s5_dependances.h"


void s5_menu()
{
	char selector = 'a';

	const unsigned int max_dimension = 64;
	char* buffer = new char[max_dimension];
	
	*buffer = { ' ' };

	cout << endl;
	cout << "----SEMINAR 5 MENU----";
	cout << endl;



	do
	{
		cout << " 1. Enter the text." << endl;
		cout << " 2. Display the tasks." << endl;
		cout << " 5. Exit." << endl;
		cout << "Your selection: ";
		cin >> selector;


		switch (selector)
		{
		case '1': 
		{
			input(buffer, max_dimension);
			cout << endl;
			break;
		}
		case '2':
		{
			output(buffer, max_dimension);
			cout << endl;
			break;
		}
		case '5':
			break;

		default: cout << "Wrong input, try again. " << endl;
		}

	} while (selector != '5');


	//cout << "Deleting the array." << endl;//DEBUG
	delete[] buffer;
	//cout << "Array deleted." << endl;//DEBUG
}