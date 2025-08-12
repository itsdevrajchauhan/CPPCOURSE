#include <iostream>
using namespace std;

class Complex
{

    int a, b;

public:
    // constructor is a special member function with the same name as of the calss
    // .it is automoatically invoked whenever is objec is created
    // creating a construcr

    Complex(void); // constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "" << endl;
    }
};

Complex::Complex(void) // this is default constructor han takes no parameter
{
    a = 23;
    b = 2;
}

int main()
{
    Complex c, c1, c2, c3, c4;
    c.printNumber();
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    c4.printNumber();

    return 0;
}

// properties of constructor :


// should be declred on public section of the class
// they are automatically invoked whenever the object  is created
// they cannot return values and do not have retrun types
// it can have default arguments
// we cannot refer to their address
