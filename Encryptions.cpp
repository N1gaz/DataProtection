#include "Encryptions.h"

char * vertical_encryption(char * source,int size , std::vector<int> key)
{
	char* result = new char[size];
	std::vector<std::vector<char>> table;
	
	int rows = size / key.size() + 1;
	int cols = key.size();

	table.reserve(rows);
	for (int i = 0; i < rows; i++)
	{
		table[i].reserve(cols);
	}


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			table[i][j] = source[i * cols + j];
		}
	}

	for (int i = 0; i < size % key.size(); i++)
	{
		table[]
	}


	return result;
}
