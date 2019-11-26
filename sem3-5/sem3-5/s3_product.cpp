#include "stdafx.h"

//PRODUCT() -> int or 0, product of the elements btwn the 1st and the 2nd negeatives
int* product(const int* t_array, unsigned int size)
{
	unsigned int i;																	//iterator

	int* borders = new int[2];														//positions of the first and the second 0
	borders[0] = -1;
	borders[1] = -1;

	//determining the borders
	for (i = 0; i < size; i++)
	{
		if (t_array[i] == 0)
		{
			if (borders[0] == -1)
			{
				borders[0] = i;																//left border
			}
			else if (borders[1] == -1)
			{
				borders[1] = i;															//right border
				break;
			}
		}
	}


	return borders;															//-> product
}