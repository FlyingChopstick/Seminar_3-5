#pragma once

int s3_main();
//main menu of s3
int s3_menu();

//ARRAY_SIZE() -> int user_size, handles setting the size of the array and <is_created> check
int array_size(const unsigned int max_size);

//INPUT(), fills the array
void input(int* t_array, unsigned int size);
/**
//INPUT() -> int*, creates and fills the array
int input(int* t_array, unsigned int size, bool* is_created);
/**/

//OUTPUT() -> 0, handles the output of the values and the array
int output(const int* t_array, unsigned int size);


//MAX_POSITION() -> int, determines the position of the greatest element
int max_position(const int* t_array, unsigned int size);
//PRODUCT() -> int or 0, product of the elements btwn the 1st and the 2nd negeatives
int product(const int* t_array, unsigned int size);
//SORT() -> 0, sorts the array with odd positioned numbers before odd
int* sort(const int* t_array, unsigned int size);
