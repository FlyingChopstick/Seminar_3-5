#pragma once

int s4_main();
int s4_menu();

int** input(int** &t_array, unsigned int dimension, bool );
int output(int** t_array, unsigned int dimension);

int identical(int** t_array, unsigned int dimension);
bool compare(int** t_array, unsigned int dimension, int start_index);
int search(int** t_array, unsigned int dimension);