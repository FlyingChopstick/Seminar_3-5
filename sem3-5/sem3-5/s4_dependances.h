#pragma once

int s4_main();
//main menu of s4
int s4_menu();

//INPUT() -> **t_array, fills the array 
//int** input(int** t_array, unsigned int dimension, bool* is_created, unsigned int pre_alloc);
int** input(int** t_array, unsigned int dimension, unsigned int pre_alloc, bool* is_created);
//ARRAY_SIZE() -> unsigned int dimension, handles the array size setting and <is_created> check
unsigned int array_size(unsigned int pre_alloc, unsigned int dimension, bool* is_created);

//OUTPUT() -> 0, handles output of the values and the array
int output(int** t_array, unsigned int dimension, bool* is_created);

//IDENTICAL() -> int result, cout<< of the identical rows and columns
int identical(int** t_array, unsigned int dimension);
//COMPARE() -> bool t/f, compares the <start_index> column and row, ->true if identical
bool compare(int** t_array, unsigned int dimension, int start_index);
//SEARCH() ->int tmp, checks whether the row has <0 elements, sums if true
int search(int** t_array, unsigned int dimension);
