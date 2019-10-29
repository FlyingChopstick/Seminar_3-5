#pragma once

int s3_main();
int s3_menu();

int input(int* &t_array, unsigned int* size, bool* is_created);

int output(int max_pos, int n_product, const int* t_array, unsigned int* size, bool* is_created, bool* two_negatives);
//THE NEW_OUTPUT.cpp SHOULD BE USED 
//int output(int max_pos, int n_product, int* t_array, unsigned int* size, bool* is_created, bool* two_negatives, bool* is_sorted);

int max_position(const int* t_array, unsigned int *size);
int product(const int* t_array, unsigned int* size, bool* two_negatives);



int sort(const int* t_array, unsigned int* size, bool* is_created);
//THE NEW_SORT.cpp SHOULD BE USED, SORT.cpp IS OBSOLETE
//int sort(int* &t_array, unsigned int* size, bool* is_created, bool* is_sorted);