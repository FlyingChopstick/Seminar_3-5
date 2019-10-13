//COMPARE() -> bool t/f, compares the <start_index> column and row, ->true if identical
bool compare(int** t_array, unsigned int dimension, int start_index) {
	int c = 1;


	while ((t_array[c][start_index] == t_array[start_index][c]) && (c<dimension-1))
	{							//counts equal elements in row/column
		c++;
	}

	if (c == dimension-1) {																	//if all elements are equal -> true
		return true;
	}

	return false;																			//-> false
}
/**/