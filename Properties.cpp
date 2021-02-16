#include "Properties.h"
#include <iostream>

int get_file_length(std::ifstream& file)
{
	int size = 0;
	file.seekg(0, std::ios::end);
	size = file.tellg();
	return size;
}

std::map<char, int> get_file_bytes_count_in_map(std::ifstream & file)
{
	file.seekg(0, std::ios::beg);
	std::map<char, int> result;
	char buf = 0;

	while (!file.eof())
	{
		file.read(&buf, 1);
		if (!result.count(buf))
		{
			result.insert(std::pair<char, int> (buf, 1));
		}
		else
		{
			result[buf] += 1;
		}
	}
	
	return result;
}

std::vector<int> get_file_bytes_count_in_vector(std::ifstream & file)
{
	int size = get_file_length(file);
	file.seekg(0, std::ios::end);
	std::vector<int> result(256);

	for (int i = 0; i < 256; i++)
	{
		result[i] = 0;
	}

	char buf;

	for (int i = 0; i < size; i++)
	{
		file.read(&buf, 1);
		result[buf + 128] += 1;
	}

	return result;
}

