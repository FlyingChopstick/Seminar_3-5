#include "stdafx.h"

//int PRODUCT() -> int or 0, product of the elements btwn the 1st and the 2nd negeatives
int product(const int* t_array, unsigned int* size, bool* two_negatives) {
	unsigned int i;																	//iterator
	int st = -1, fin = -1;															//interval borders
	int product = 1;																//product

	//determining the borders
	for (i = 0; i < *size; i++) {
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
		//if there's 1 or less zeroes -> 0
	if ((st == -1) || (fin == -1)) 
	{												
		*two_negatives = false;														//array state change (0 or 1 zero)

		return 0;																	//-> 0
	}
		//if both borders exist
	else 
	{																			
		//calculation of the product
		for (i = st + 1; i < fin; i++) {
			product *= t_array[i];
		}
		*two_negatives = true;														//array state change (found 2 zeroes)

		return product;																//-> product
	}
}