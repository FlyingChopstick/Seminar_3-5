/**/
//#include <iostream>
//bool COMPARE(int t_array[k][k], int start_index) -> bool t/f, compares the <start_index> column and row, ->true if identical
bool compare(int** t_array, unsigned int dimension, int start_index) {
	int c = 1;
	//std::cout << t_array[0][1];

	while ((t_array[c][start_index] == t_array[start_index][c]) && (c<dimension-1))
	{							//counts equal elements in row/column
		c++;
	}

	if (c == dimension-1) {																			//if all elements are equal -> true
		//std::cout << "The " << start_index << " row and column are identical";
		return true;
	}

	return false;																			//-> false
}
/**/