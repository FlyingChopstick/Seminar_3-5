#include "stdafx.h"
#include "s3_dependances.h"
#include "s4_dependances.h"
#include "s5_dependances.h"


int main() 
{
	char selector = '0';
	
	do
	{

		cout << "-----MAIN MENU-----" << endl;
		cout << " 1. Seminar 3" << endl;
		cout << " 2. Seminar 4" << endl;
		cout << " 3. Seminar 5" << endl;
		cout << " 7. Exit" << endl;
		cout << "Select the task: ";
		cin >> selector;

		switch (selector)
		{
		case '1': s3_main(); cout << endl;
			break;
		case '2': s4_main(); cout << endl;
			break;
		case '3': s5_main(); cout << endl;
			break;

		case '7':
		{
			return 0;
		}
		break;

		default: cout << "Wrong input. Try again" << endl;
			break;
		}
	} while (selector != '7');

	cout << endl;
	system("pause");
	return 0;
}
