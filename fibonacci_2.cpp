#include <iostream>
#include <string>
#include <cstring>
using namespace std;

main(){
    int term1 = 0, term2 = 1, next;
    float n;
    cout << "Please Enter Positive a Number End of The Fibonacci: ";
    cin >> n;

    if(n > 0){
        cout << term1 << " " << term2 << " ";
        next = term1 + term2;
        while(next <= n){
            cout << next << " ";
            term1 = term2;
            term2 = next;
            next = term1 + term2;
        }
    }else{
        cout << "Please Try Again But This Time With a Positive Number" << endl;
    }
}