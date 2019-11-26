//#include <iostream>
#include "stdafx.h"

#include "s4_dependances.h"

//OUTPUT(), handles output of the values and the array
void output(int** t_array, unsigned int dimension)
{
	unsigned int i, j;
	char selector = 'n';

	int* arr_identical = new int[dimension];
	int** arr_search = new int*[dimension];
	for (i=0;i<dimension;i++)
		arr_search[i] = new int[2];


	cout << endl;
	cout << "----OUTPUT MENU----"; 
	cout << endl;

	do
	{
		cout << " 1. Search for identical rows and columns" << endl;
		cout << " 2. Sum the rows with the negative elements" << endl;
		cout << " 3. Display the array" << endl;
		cout << " 5. Return" << endl;
		cout << "Your selection: ";
		cin >> selector;

		switch (selector)
		{
		case '1': 
		{
			arr_identical = identical(t_array, dimension);
			display_identical(arr_identical, dimension);
			cout << endl;
			break;
		}

		case '2': 
		{
			arr_search = search(t_array, dimension);
			display_search(arr_search, dimension);
			cout << endl;
			break;
		}

		case '3':
		{
			display_array(t_array, dimension);
			cout << endl;
			break;
		}

		case '5':
		{
			break;
		}

		default: cout << "Wrong input, please try again." << endl;
			break;
		}

	} while (selector != '5');

	delete[] arr_identical;
	for (i = 0; i < dimension; i++)
		delete[] arr_search[i];
	delete[] arr_search;


	cout << endl;
	cout << "----OUTPUT END----";
	cout << endl;
}