#include <iostream>
#include <cstring> //For strlen()
using namespace std;

int main(){
    char character[] = "monday";

    for(int i = 0; i < strlen(character); i++){
        cout << character[i] << endl;
    }
}