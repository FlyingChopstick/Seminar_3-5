#include "stdafx.h"

//DISPLAY_TEXT, prints the text from the buffer
void display_text(const char* buffer, unsigned int max_dimension)
{
	unsigned int i;

	cout << endl;
	cout << "You entered the following text: " << endl;
	for (i = 0; i < max_dimension; i++)
	{
		cout << buffer[i];
	}
	cout << endl << endl;
}