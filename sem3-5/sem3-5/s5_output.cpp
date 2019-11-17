#include "stdafx.h"
#include "s5_dependances.h"

//OUTPUT() -> 0, handles the output of the values and the text from <buffer>
int output(const char *buffer, const unsigned int pre_alloc)
{
	unsigned int i = 0;

	char selector = 'a';

	cout << endl
		<< "----OUTPUT MENU----" << endl;

	do
	{
		cout << " 1. Find words with less then five symbols" << endl;
		cout << " 2. Display the text" << endl;
		cout << " 5. Return" << endl;
		cout << "Your selection: ";
		cin >> selector;

		switch (selector)
		{
		case '1': 
		{
			
			parse(buffer, pre_alloc);
			cout << endl;

			break;
		}

		case '2': 
		{
			cout << "You entered the following text: " << endl;
			for (i = 0; i < pre_alloc; i++)
			{
				cout << buffer[i];
			}
			cout << endl;

			break;
		}

		case '5': break;

		default: cout << "Wrong input, try again." << endl;
			break;
		}
	} while (selector != '5');
	

	//cout << endl;
	return 0;
}