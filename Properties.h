#pragma once
#include <fstream>
#include <map>
#include <vector>


int get_file_length(std::ifstream& file);
std::map<char, int> get_file_bytes_count_in_map(std::ifstream& file);
std::vector<int> get_file_bytes_count_in_vector(std::ifstream& file);


