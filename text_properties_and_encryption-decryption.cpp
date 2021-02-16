#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Properties.h"
#include <map>
#include <vector>

using namespace std;

int main()
{

	ifstream file("InputData.doc", ios::in | ios::binary);

	if (!file)
	{
		cout << "File isn't exist" << endl;
		return 404;
	}

	int size = get_file_length(file);

	cout << "file size is " << size << " bytes." << endl;
	
	map<char, int> result = get_file_bytes_count_in_map(file);

	for (pair<char, int> i : result)
	{
		cout << "Relative frequency of " << i.first << " is " << (double)i.second/size*100<< "%" << endl;
	}

	




	file.close();
	system("pause");
	return 0;
}
