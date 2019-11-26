#include "stdafx.h"
#include "s4_dependances.h"

//ARRAY_DIMENSION() -> int user_dimension, handles the array size setting and <is_created> check
int array_dimension(unsigned int max_dimension)
{
	int user_dimension = 0;

	cout << endl;
	cout << "Enter the size of the array (NxN, max " << max_dimension << "): ";
	cin >> user_dimension;

	while (true)
	{
		//input check
		if ((user_dimension <= 0) || (user_dimension > max_dimension))
		{
			cout << "Error: Wrong size of the array. It must be between 1 and " << max_dimension << ", please try again: ";
			cin >> user_dimension;
		}
		else
			break;
	}

	return user_dimension;
}