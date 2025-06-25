#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 34;
    cout << " the value of a was : " << a << endl;
    a = 40;
    cout << "the value of a now " << a << endl;

    const int b = 56;
    cout << "the value of b is now : " << b << endl;
    // b = 33; //this can not be changed because it is constant
    cout << "this will throw error ,if you try again b with change value  : " << b << endl;

    // Manipulators in c++

    int x = 22, y = 33, z = 234;

    cout << "The value of x without setw : " << x << endl;
    cout << "The value of x without setw : " << x << endl;
    cout << "The value of x without setw : " << x << endl;

    cout << "The value of with setw x: " << setw(5) << x << endl;
    cout << "The value of with setw x  : " << setw(6) << x << endl;
    cout << "The value of wtih setw x : " << setw(9) << x << endl;

    // operator precedence
    int aa = 3, bb = 43, cc = 343;
    int dd = aa * 5 + bb + cc;
    cout << dd << endl;

    return 0;
}

// in this code i learned about constant type of variable
// and Operator Precedence lift -to-right

/* Thanks for Gowing thorugh all the Code  :  */