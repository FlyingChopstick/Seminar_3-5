#include <iostream>
#include "s4_dependances.h"

int s4_main() {
	s4_menu();


	/**
	//int t_array[k][k];
	//unsigned int i, j;
	//int result;																						//DEBUG <result>


	//array input loop
	//for (i = 0; i < k; i++) {
	//	for (j = 0; j < k; j++) {
	//		std::cin >> t_array[i][j];
	//	}
	//}
	/**/

	/*
	//i[0-k] loop, checks the first numbers in columns/rows
	for (i = 0; i < k; i++) {
		unsigned int t;
		int tmp = 0;

		if (t_array[0][i] == t_array[i][0]) {
			compare(t_array, i);																//COMPARE() is called

			//result = (compare(t_array, i) == true) ? i : -1;											//DEBUG COMPARE() is called, output is stored in <result>
			//std::cout << "The result is \"" << result << "\"";										//DEBUG raw <result>

		}

		std::cout << std::endl;
		unsigned int t;
		int tmp = 0;
		//j[0-k] loop, searches for negatives, sums the row in <tmp> if found
		for (j = 0; j < k; j++) {
			if (t_array[i][j] < 0) {
				for (t = 0; t < k; t++) {
					tmp += t_array[i][t];

					//std::cout << t_array[i][t] << std::endl;											//DEBUG <array element>
					//std::cout << t << "|" << tmp << std::endl;										//DEBUG <t, tmp>
				}
				std::cout << "The sum of i=" << i << " is " << tmp << std::endl;
				break;
			}
		}
	}
	/**/
	
	
	//system("pause");
	return 0;
}
