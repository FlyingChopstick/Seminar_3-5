#pragma once

int s5_main();
//main menu of s5
int s5_menu();

//INPUT() -> buffer, handles the reading of the file to <buffer>
char* input(char *buffer, unsigned int pre_alloc);
//OUTPUT() -> 0, handles the output of the values and the text from <buffer>
int output(const char *buffer, unsigned int pre_alloc);

//PARSE() -> 0, finds and outputs words with <5 letters
int parse(const char* buffer, const unsigned int pre_alloc);