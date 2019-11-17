#include "stdafx.h"
#include "s5_dependances.h"

//PARSE() -> 0, finds and outputs words with <5 letters
int parse(const char* buffer, const unsigned int pre_alloc)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int c;
	unsigned int length = 0;
	unsigned int word_count = 0;

	const unsigned int local_pre_alloc = 64;
	if (pre_alloc > local_pre_alloc) cout << "Warning: main <pre_alloc> is greater then the <local> in parse(). This may cause wrong output." << endl;

	char local_buffer[local_pre_alloc] = { ' ' };

	for (i = 0; i < pre_alloc; i++)
	{
		local_buffer[i] = buffer[i];
		//cout << local_buffer[i];//DEBUG
	}
	i = 0;


	cout << endl << "Words with no more than 4 sybols in them: ";
	while ((local_buffer[i] != '\0') && (i < local_pre_alloc-1))
	{
		j = i;
		while ((local_buffer[j] != ' ') && (local_buffer[j] != '.'))
		{
			//cout << " /" << local_buffer[j] << "/ ";//DEBUG
			length++;
			j++;


		}

			//cout << "|j1=" << j << "| ";//DEBUG
			if ((length < 5) && (length > 0))
			{
				for (c = i; c < i + length; c++)
				{
					//cout << " I am here! ";//DEBUG
					cout << local_buffer[c];
				}
				//cout << "|j2="<<j<<"|";//DEBUG
				//cout << "|";//DEBUG
				word_count++;
				cout << " ";

			}


		i += length+1;
		length = 0;
		//cout << i << endl;//DEBUG
	}

	cout << endl << "There is a total of " << word_count << " of such words in the text.";

	cout << endl;
	return 0;
}