/**
int summarize(int** t_array, unsigned int dimension, unsigned int start)
{
	unsigned int i;
	int tmp = 0;


	for (i = 0; i < dimension; i++)
	{
		tmp += t_array[start][i];

		//std::cout << t_array[i][t] << std::endl;											//DEBUG <array element>
		//std::cout << t << "|" << tmp << std::endl;										//DEBUG <t, tmp>
	}

	return tmp;
}
/**/



void rowout_header(unsigned int detected_in)
{
	
}