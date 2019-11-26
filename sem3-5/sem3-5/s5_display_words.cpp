#include "stdafx.h"

//DISPLAY_WORDS(), prints out the words with <5 symbols
void display_words(char** words, unsigned int max_dimension)
{
	unsigned int i = 0;
	unsigned words_size = max_dimension / 4;
	unsigned int words_count = 0;

	cout << endl << "Words with no more than 4 symbols in them: ";
	cout << endl;

	while ((words[words_count][0] != ' ') && (words_count <= max_dimension))
	{
		i = 0;
		cout << "\"";
		while ((words[words_count][i] != ' ') && (i < 4))
		{
			cout << words[words_count][i];
			i++;
		}
		cout << "\" ";
		words_count++;
	}


	if (words_count == 0) 
		cout << "There are no words with no more than 4 symbols." << endl;
	else
		cout << endl << "There is a total of " << words_count << " of such words in the text." << endl;

	cout << endl;
}