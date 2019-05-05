#include <iostream>
using namespace std;

main(){
	float number;
	cout << "Please Enter Positive End of The Numbers: ";
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		if((i % 3) == 0 && (i % 5) == 0){
			cout << i << " > " << "fizzbuzz" << endl;
		}else if((i % 3) == 0){
			cout << i << " > " << "fizz" << endl;
		}else if((i % 5) == 0){
			cout << i << " > " << "buzz" << endl;
		}
	}
}