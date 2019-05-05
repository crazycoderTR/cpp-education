#include <iostream>
using namespace std;

main(){
    float n;
    cout << "Please Enter a Positive Number: ";
    cin >> n;
    if(n > 0){
        int i = 0;
        while(n > 1){
            n = n / 10;
            i++;
        }
        cout << "Your Number " << i << " digits" << endl;
    }else{cout << "Try Again But This Time With a Positive Number";}
}