#pragma once

int s3_main();
int s3_menu();

int input(int* &t_array, unsigned int* size, bool* is_created);
int output(int max_pos, int n_product, int* t_array, unsigned int* size, bool* is_created, bool* two_negatives, bool* is_sorted);

int max_position(int* &t_array, unsigned int *size);
int product(int* t_array, unsigned int* size, bool* two_negatives);
int sort(int* &t_array, unsigned int* size, bool* is_created, bool* is_sorted);