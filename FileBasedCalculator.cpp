//============================================================================
// Name        : FileBasedCalculator.cpp
// Author      : Josh Fugate
// Version     :
// Copyright   : Your copyright notice
// Description : Calculator
//============================================================================

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void ReadWriteIO(){

	string in_file = "input.txt";
	string out_file = "output.txt";
	string fileLine;

	ifstream in_myfile (in_file);
	ofstream out_myfile (out_file);
	if (in_myfile.is_open()) {
		if (out_myfile.is_open()) {
			while (getline (in_myfile, fileLine) ) {
				string out_line = fileLine;
				cout << "Inputted file value:\t" << out_line << endl;
				out_myfile << out_line;
			}
			out_myfile.close();
		} else {
			cout << "Unable to open file - " << out_file << endl;
		}
		in_myfile.close();
	} else
		cout << "Unable to open file - " << in_file << endl;

}

int main() {
	ReadWriteIO();
	return 0;
}
