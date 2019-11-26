#pragma once

int s4_main();
//main menu of s4
void s4_menu();


//INPUT(), fills the array 
void input(int** t_array, unsigned int dimension);
//ARRAY_DIMENSION() -> int user_dimension, handles the array size setting
int array_dimension(unsigned int max_dimension);
//OUTPUT(), handles output of the values and the array
void output(int** t_array, unsigned int dimension);


//IDENTICAL() -> int* numbers, finds and returns the array of numbers of identical r&c
int* identical(int** t_array, unsigned int dimension);
//COMPARE() -> bool t/f, compares the <start_index> column and row, ->true if identical
bool compare(int** t_array, unsigned int dimension, int start_index);
//SEARCH() ->int** sums, checks whether the row has <0 elements, sums and puts in the array if true
int** search(int** t_array, const unsigned int dimension);


//DISPLAY_ARRAY(), prints the array
void display_array(int** target, unsigned int dimension);
//DISPLAY_IDENTICAL(), prints the numbers of the identical r&c if found
void display_identical(int* target, unsigned int dimension);
//DISPLAY_SEARCH(), prints the sums of the rows with negative elements
void display_search(int** target, unsigned int dimension);