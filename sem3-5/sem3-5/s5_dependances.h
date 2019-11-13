#pragma once

int s5_main();
int s5_menu();

char* input(char *buffer, unsigned int pre_alloc);
int output(const char *buffer, unsigned int pre_alloc);

int parse(const char* buffer, const unsigned int pre_alloc);