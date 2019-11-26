#pragma once

int s5_main();
//main menu of s5
void s5_menu();


//INPUT(), handles the reading of the file to <buffer>
void input(char *buffer, unsigned int max_dimension);
//OUTPUT(), handles the output of the values and the text from <buffer>
void output(const char *buffer, unsigned int max_dimension);


//PARSE() -> 0, finds and outputs words with <5 letters
char** parse(const char* buffer, const unsigned int max_dimension);


//DISPLAY_TEXT, prints the text from the buffer
void display_text(const char* buffer, unsigned int max_dimension);
//DISPLAY_WORDS(), prints out the words with <5 symbols
void display_words(char** words, unsigned int max_dimension);