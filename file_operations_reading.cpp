#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

main(){
	// ofstream -> for write to file
	ifstream file;

	file.open("file.txt"); //opening

	int max = 70;
	char buff[max];

	while(!file.eof()){
		file.getline(buff, max);
		cout << buff << endl;
	}

	file.close(); //closin
}