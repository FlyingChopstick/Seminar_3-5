#include "stdafx.h"
#include "s5_dependances.h"

int parse(const char* buffer, const unsigned int pre_alloc)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int c;
	unsigned int length = 0;

	char local_buffer[64] = { ' ' };

	for (i = 0; i < pre_alloc; i++)
	{
		local_buffer[i] = buffer[i];
		//cout << local_buffer;
	}
	i = 0;

	while ((local_buffer[i] != '\0') && (i < pre_alloc))
	{
		j = i;
		while (local_buffer[j] != ' ')
		{
			//cout << local_buffer[j];
			length++;
			j++;	
		}

		//cout << "|j=" << j << "| ";
		if (length < 5)
		{
			for (c = i; c < i + 4; c++)
			{
				//cout << " I am here! ";
				cout << local_buffer[c];
			}
			//cout << "|"<<j<<"|";

			cout << " ";

		}


		i += length+1;
		length = 0;
		//cout << i << endl;
	}

	cout << endl;
	return 0;
}