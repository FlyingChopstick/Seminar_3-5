#include "stdafx.h"

//ARRAY_SIZE() -> int user_size, handles setting the size of the array and <is_created> check
int array_size(const unsigned int max_size)
{
	int user_size = 0;


	while (true)
	{
		cout << endl;
		cout << "Enter the size of the array (max. " << max_size << "): ";
		cin >> user_size;

		//input check
		if ((user_size <= 0) || (user_size > max_size))
			cout << "Error: Array size must be >0 and <=" << max_size << ". Please try again." << endl;
		else
			break;
	}
	

	return user_size;
}