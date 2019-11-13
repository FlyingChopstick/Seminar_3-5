#include "stdafx.h"
#include "s5_dependances.h"


int s5_menu()
{
	unsigned int i;
	char selector = 'a';

	const unsigned int pre_alloc = 64;
	char* buffer = new char[pre_alloc];
	
	*buffer = { ' ' };


	cout << "----SEMINAR 5 MENU----" << endl;


	do
	{
		cout << endl;
		cout << " 1. Enter the text." << endl;
		cout << " 2. Output the text." << endl;
		cout << " 5. Exit." << endl;
		cout << "Your selection: ";
		cin >> selector;

		switch (selector)
		{
		case '1': input(buffer, pre_alloc);
			break;

		case '2': output(buffer, pre_alloc);
			break;

		case '5':
			break;

		default: cout << "Wrong input, try again. " << endl;
		}

	} while (selector != '5');


	cout << "Deleting the array." << endl;
	delete[] buffer;
	cout << "Array deleted." << endl;

	return 0;
}