#include "stdafx.h"
#include "s5_dependances.h"

//OUTPUT() -> 0, handles the output of the values and the text from <buffer>
void output(const char *buffer, const unsigned int max_dimension)
{
	char selector = 'a';
	unsigned int i;
	unsigned int words_size = max_dimension / 4;


	char** words = new char* [words_size];
	for (i = 1; i < words_size; i++)
	{
		words[i] = new char[4];

	}

	cout << endl;
	cout << "----OUTPUT MENU----";
	cout << endl;



	do
	{
		cout << " 1. Find words with less then five symbols" << endl;
		cout << " 2. Print the text" << endl;
		cout << " 5. Return" << endl;
		cout << "Your selection: ";
		cin >> selector;

		switch (selector)
		{
		case '1': 
		{
			words = parse(buffer, max_dimension);
			//cout << endl;
			display_words(words, max_dimension);
			break;
		}

		case '2': 
		{
			display_text(buffer, max_dimension);
			break;
		}

		case '5': break;

		default: cout << "Wrong input, try again." << endl;
			break;
		}
	} while (selector != '5');
	

	cout << endl;
	cout << "----OUTPUT END----";
	cout << endl;
}