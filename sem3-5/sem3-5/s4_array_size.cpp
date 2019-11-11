#include "stdafx.h"

unsigned int array_size()
{
	unsigned int n = 0;

	cout << "Enter the size of the array (NxN): ";
	cin >> n;

	while (true)
	{
		if (n <= 0)
		{
			cout << "Ilegal array's size! Try again! Enter the correct size of the array(NxN) => ";
			cin >> n;
		}
		else
			break;
	}

	return n;
}