#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string msg;

	ifstream fin("output.txt");

	while(!fin.eof())
	{
		getline(fin, msg); 
		cout << msg << endl;
	}

	fin.close();

}