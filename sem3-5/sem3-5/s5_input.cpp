#include "stdafx.h"
#include "s5_dependances.h"
#include <fstream>

using std::ifstream;

//INPUT() -> buffer, handles the reading of the file to <buffer>
char* input(char* buffer, const unsigned int pre_alloc)
{
	unsigned int i = 0;

	char local_buffer[64] = { ' ' };

	const unsigned int filename_size = 64;
	char filename[filename_size];
	ifstream input_file;


	do
	{
		cout << "Specify the name of the file (max. " << filename_size << " symbols): ";
		cin >> filename;


		cout << "Opening the file..." << endl;
		input_file.open(filename);
		if (!input_file) cout << "Error: Could not open the file specified."
			<< endl;

	} while (!input_file);

	cout << "File was successfully opened, reading..." << endl;

	input_file.getline(local_buffer, 63);

	cout << "The file was read successfully.";
	cout << endl;

	input_file.close();

	for (i = 0; i < 64; i++)
	{
		//cout << local_buffer[i];
		buffer[i] = local_buffer[i];
	}


	//system("pause");
	return buffer;
}