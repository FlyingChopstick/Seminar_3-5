#include "stdafx.h"
#include "s5_dependances.h"
#include <fstream>

using std::ifstream;

//INPUT() -> buffer, handles the reading of the file to <buffer>
void input(char* buffer, const unsigned int max_dimension)
{
	unsigned int i = 0;

	//const unsigned int local_max_dimension = 64;
	//if (max_dimension > local_max_dimension) cout << "Warning: main <max_dimension> is greater then the <local> in input(). This may cause wrong output." << endl;

	char* local_buffer = new char[max_dimension];
	for (i = 0; i < max_dimension; i++)
		local_buffer[i] = ' ';

	const unsigned int filename_size = 64;
	char filename[filename_size];
	ifstream input_file;

	cout << endl;
	cout << "----INPUT----";
	cout << endl;

	do
	{
		cout << endl;
		cout << "Specify the name of the file (max. " << filename_size << " symbols): ";
		cin >> filename;


		cout << "Opening the file..." << endl;
		input_file.open(filename);
		if (!input_file) cout << "Error: Could not open the file specified." << endl;

	} while (!input_file);

	cout << "File was successfully opened, reading..." << endl;

	input_file.getline(local_buffer, max_dimension-1);

	cout << "The file was read successfully.";
	cout << endl;

	input_file.close();

	for (i = 0; i < max_dimension; i++)
	{
		//cout << local_buffer[i];//DEBUG
		buffer[i] = local_buffer[i];
	}



	//cout << "Deleting the local_buffer" << endl;//DEBUG
	delete[] local_buffer;
	//cout << "Buffer deleted" << endl;//DEBUG

	cout << endl;
	cout << "----INPUT END----";
	cout << endl;
}