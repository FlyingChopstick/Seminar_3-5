#include "stdafx.h"

//ARRAY_SIZE() -> int user_size, handles setting the size of the array and <is_created> check
int array_size(const unsigned int max_size)
{
	int user_size = 0;
	while (user_size <= 0)
	{
		cout << "Enter the size of the array: ";
		cin >> user_size;

		//check if the input is valid (>0)
		if (user_size <= 0)
			cout << "Error: Array size must be >0. Please try again." << endl;
	}
	

	return user_size;
}