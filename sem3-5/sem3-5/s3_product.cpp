#include "stdafx.h"

//PRODUCT() -> int or 0, product of the elements btwn the 1st and the 2nd negeatives
int product(const int* t_array, unsigned int size) 
{
	unsigned int i;																	//iterator
	int st = -1, fin = -1;															//interval borders
	int product = 1;																//product

	//determining the borders
	for (i = 0; i < size; i++) {
		if (t_array[i] == 0) {
			if (st == -1) {
				st = i;																//left border
			}
			else if (fin == -1) {
				fin = i;															//right border
				break;
			}
		}
	}


	//output determination

	//if there's no zeroes -> 0
	if ((st == -1) && (fin == -1)) 
	{												
		cout << "There are no 0 in the array, unable to calculate." << endl;
		cout << endl;
		return 0;																	//-> 0
	}
	//if at least one of the borders exist
	else 
	{				
		//if only one 0 is found -> 0
		if (fin == -1)
		{
			cout << "There is only one 0 in the array, unable to calculate." << endl;
			cout << endl;
			return 0;																//-> 0
		}
		//if both 0 are found
		else
		{
			//if this is a "...0 0..." situation -> 0
			if (fin == st + 1)
			{
				cout << "Zeroes are following each other, unable to calculate." << endl;
				cout << endl;
				return 0;
			}
			//both 0 are valid, calculation of the product
			else
			{
				for (i = st + 1; i < fin; i++) 
				{
					product *= t_array[i];
				}
				//*product_calculated = true;												//array state change (product is calculated successfully)
			}

			
			cout << endl << "The product of the elements between the first and the second 0 is " << product << endl;
			return product;															//-> product
		}
	}
}