#include "stdafx.h"

//MAX_POSITION() -> int, determines the position of the greatest element
int max_position(const int* t_array, unsigned int size) {
	unsigned int i;																//iterator
	int max = t_array[0];														//setting array[0] as max
	int position = 0;															//setting the position of max as 0

	//standart loop for finding max
	for (i = 1; i < size; i++) {
		if (t_array[i] > max) {
			max = t_array[i];
			position = i;
		}
	}

	return position;															//-> position
}