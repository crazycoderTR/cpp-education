#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

main(){
	// ofstream -> for write to file
	ofstream file;

	file.open("file.txt"); //opening

	file << "Hello That Is First File Writing!!!";

	file.close(); //closin
}