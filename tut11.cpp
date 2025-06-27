#include <iostream>
using namespace std;
int main()
{

    // pointer is data type which holds the address of other data types

    int a = 3;
    int *b = &a;
    cout << b << endl; // show you address

    // & ---->   addresh at operatoer showing addreshh of the variable
    cout << "This is showing location of variabble in memory" << b << endl;
    cout << "this is showing location of varibale in memory" << &a << endl;

    // * ----> (value at ) operater used for printing the value of address using location of variable
    cout << "this is value of variable : " << *b << endl;
    cout << "this is value of  variable : " << a << endl;

    // pointer to pointer variable -which stores pointers variable in another pointer

    int **c = &b;
    cout << "the addreassh of b is : " << &b << endl;
    cout << "the addresss of b is : " << c << endl;
    cout << "the  value at address *c is : " << *c << endl;
    cout << "the value at address value at  (addresss(c)) is : " << **c << endl;
    cout << "the value at address of b storing in c  : " << &c << endl;
    return 0;
}

// all about pointer learned in this video