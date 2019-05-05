#include <iostream>
using namespace std;

/*
    * address -> it keeps address of values
    * *address -> it keeps value in the address
    * the name of the array is a pointer holding the first element's address
*/

int main(){
    int temp = 100;

    int* address_of_temp = &temp;

    cout << "Address of Temp = " << address_of_temp << endl;
    cout << "The value " << *address_of_temp << " in " << address_of_temp << endl;

    /*********************************************************************************************/

    int ptr_array[] = {2, 4, 6, 3};

    for(int i = 0; i < 4; i++){
        // It will show values in the array
        cout << *(ptr_array + i) << endl;
    }
}