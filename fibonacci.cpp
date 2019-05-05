#include <iostream>
#include <cstring>
using namespace std;

main(){
	int term1 = 0, term2 = 1, next, n;
	cout << "Please Enter a Positive Term Number For End of The Fibonacci: ";
	cin >> n;

	if(n > 0){
		cout << term1 << " " << term2 << " ";
		for (int i = 2; i < n; i++)
		{
			next = term1 + term2;
			term1 = term2;
			term2 = next;
			cout << next << " ";
		}
	}else{
		cout << "Please Enter a Positive Number!" << endl;
	}
}