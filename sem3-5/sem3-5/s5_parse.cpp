#include "stdafx.h"
#include "s5_dependances.h"

//PARSE() -> 0, finds and outputs words with <5 letters
char** parse(const char* buffer, const unsigned int max_dimension)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int c;
	unsigned int c2;
	//unsigned int words_position = 0;
	unsigned int length = 0;
	unsigned int words_count = 0;

	/**
	const unsigned int local_max_dimension = 64;
	if (max_dimension > local_max_dimension) cout << "Warning: main <max_dimension> is greater then the <local> in parse(). This may cause wrong output." << endl;

	char local_buffer[local_max_dimension] = { ' ' };
	/**/

	char* local_buffer = new char[max_dimension];
	for (i = 0; i < max_dimension; i++)
	{
		local_buffer[i] = buffer[i];
		//cout << local_buffer[i];//DEBUG
	}


	unsigned int words_size = max_dimension / 4;
	char** words = new char* [words_size];
	for (i = 0; i < words_size; i++)
	{
		words[i] = new char[4];
		
		for (j = 0; j < 4; j++)
		{
			words[i][j] = ' ';
		}
	}


	
	i = 0;
	while ((local_buffer[i] != '\0') && (i < max_dimension-1))
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
				//cout << " /" << words[words_count][0] << "/ ";//DEBUG
				c2 = 0;
				for (c = i; c < i + length; c++)
				{
					
					//cout << " I am here! ";//DEBUG
					//cout << local_buffer[c];//DEBUG
					//cout << c2 << " ";//DEBUG
					//cout << c << " ";//DEBUG
					//cout << words_count << " ";//DEBUG
					words[words_count][c2] = local_buffer[c];
					c2++;
				}
				//cout << "|j2="<<j<<"|";//DEBUG
				//cout << "|";//DEBUG
				words_count++;
				//cout << " ";//DEBUG

			}

		i += length+1;
		length = 0;
		//cout << i << endl;//DEBUG
	}

	

	delete[] local_buffer;

	return words;
}