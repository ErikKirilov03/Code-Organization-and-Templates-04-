#ifndef SPLIT_H
#define SPLIT_H

#include<vector>
#include<sstream>

using namespace std;


template<typename T> vector<T> split(const string& line, char separator) {
	vector<T> result;

	istringstream iss(line);
	string buffer;
	while (getline(iss, buffer, separator)) {
		istringstream fullBuffer(buffer);
		T temp;
		fullBuffer >> temp;
		result.push_back(temp);
	}

	return result;
}

#endif