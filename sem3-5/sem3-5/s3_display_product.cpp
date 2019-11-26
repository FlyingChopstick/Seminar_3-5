#include "stdafx.h"

//CALCULATE_PRODUCT(), calculates the product of elements between first two 0
void display_product(const int* t_array, int* borders)
{
	int result = 1;																//product
	unsigned int i;

	//output determination

	//if there's no zeroes -> 0
	if ((borders[0] == -1) && (borders[1] == -1))
	{
		cout << "There are no 0 in the array, unable to calculate." << endl;
		cout << endl;
																//return
	}
	//if at least one of the borders exist
	else
	{
		//if only one 0 is found -> 0
		if (borders[1] == -1)
		{
			cout << "There is only one 0 in the array, unable to calculate." << endl;
			cout << endl;
			//return
		}
		//if both 0 are found
		else
		{
			//if this is a "...0 0..." situation -> 0
			if (borders[1] == borders[0] + 1)
			{
				cout << "Zeroes are following each other, unable to calculate." << endl;
				cout << endl;
				//return
			}
			//both 0 are valid, calculation of the product
			else
			{
				for (i = borders[0] + 1; i < borders[1]; i++)
				{
					result *= t_array[i];
				}
				cout << endl << "The product of the elements between the first and the second 0 is " << result << endl;
			}
		}
	}

	//return result;
}