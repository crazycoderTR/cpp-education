#include <iostream>
#include <string>
#include <cstring>
using namespace std;

main(){
	char word[100];
	cout << "Please Enter a Word: ";
	cin >> word;

	int length = strlen(word);
	bool palindrom = true;

	if(length > 0){
		for (int i = 0; i < length; i++)
		{
			if((word[i] != word[length - 1 - i])){
				palindrom = false;
			}
		}
		if(palindrom == true){
			cout << "That Is Palindrom Word" << endl;
		}else{
			cout << "That Is Not a Palindrom Word" << endl;
		}
	}else{
		cout << "Try Again But This Time With a Real Word!!!" << endl;
	}
}