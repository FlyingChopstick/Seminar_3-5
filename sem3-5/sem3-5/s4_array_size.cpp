#include "stdafx.h"

//ARRAY_DIMENSION() -> int user_dimension, handles the array size setting and <is_created> check
int array_dimension(unsigned int max_dimension)
{
	int user_dimension = 0;

	
	while (true)
	{
		cout << endl;
		cout << "Enter the size of the array (NxN, >0, max " << max_dimension << "): ";
		cin >> user_dimension;

		//input check
		if ((user_dimension <= 0) || (user_dimension > max_dimension))
			cout << "Error: Array size must be >0 and <=" << max_dimension << ", please try again." << endl;
		else
			break;
	}


	return user_dimension;
}