#include <iostream>
#include <string>
using namespace std;

class complex_number{
	public:
	float reel, imaginel;
};

complex_number operator+ (complex_number c1, complex_number c2){
	complex_number result;

	result.reel = c1.reel + c2.reel;
	result.imaginel = c1.imaginel + c2.imaginel;

	return result;
};

int main(){
	complex_number c1, c2, total;

	cout << "Please Enter Reel Number For c1: ";
	cin >> c1.reel;
	cout << "Please Enter Imaginel Number For c1: ";
	cin >> c1.imaginel;
	cout << endl;

	cout << "Please Enter Reel Number For c2: ";
	cin >> c2.reel;
	cout << "Please Enter Imaginel Number For c2: ";
	cin >> c2.imaginel;
	cout << endl;

	total = c1 + c2;

	cout << "Reel     : " << total.reel << endl;
	cout << "Imaginel : " << total.imaginel << endl;
}