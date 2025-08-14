#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex() // default constructor
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y) // multiple constructor with same name
    {
        a = x;
        b = y;
    }

    Complex(int x) // multiple constructor with same name
    {
        a = x;
        b = 0;
    }

    void displayPrint()
    {

        cout << "the point is ( " << a << ",  " << b << ")" << endl;
    };
};

int main()
{
    Complex c1(4, 6);
    c1.displayPrint();

    Complex c2(5);
    c2.displayPrint();

    Complex c3;
    c3.displayPrint();

    return 0;
}

// In this constructor are made
// A constructor is a special function inside a class that automatically runs when an object is created.
// Overloading means creating multiple constructors with the same name (the class name) but different parameter lists.
// The compiler decides which constructor to run based on how the object is created.


// where it used To give flexibility in object creation.
/*

Sometimes you may have all values (use 2-parameter constructor),
sometimes only one value (use 1-parameter constructor),
sometimes no value (use default constructor).

This avoids writing multiple set() functions manually.
*/