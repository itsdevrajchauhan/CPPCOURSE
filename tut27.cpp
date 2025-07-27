#include <iostream>
using namespace std;

// Forward declaration of Complex class
// We tell the compiler that "Complex" exists, and we'll define it later
class Complex;

class Calculator
{

public:
    // Function to add real parts of two complex numbers
    int sumRealComplex(Complex, Complex);

    // Function to add imaginary parts (complex parts) of two complex numbers
    int sumCompComplex(Complex, Complex);
};

class Complex
{

    int a, b;

    // Granting access to only specific functions of Calculator
    // These two functions are allowed to access private members 'a' and 'b'
    friend int Calculator::sumRealComplex(Complex, Complex);
    friend int Calculator::sumCompComplex(Complex, Complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Function to print the complex number in standard format
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// This function from Calculator can now access private members of Complex
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return o1.a + o2.a; // adds real parts
}

// This function from Calculator can also access private members of Complex
int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return o1.b + o2.b; // adds imaginary parts
}

int main()
{
    Complex o1, o2;

    // o1 = 3 + 6i
    // o2 = 2 + 5i
    o1.setNumber(3, 6);
    o2.setNumber(2, 5);

    Calculator calc;

    int realSum = calc.sumRealComplex(o1, o2);

    int compSum = calc.sumCompComplex(o1, o2);

    // Print the results
    cout << "The sum of real parts: " << realSum << endl;
    cout << "The sum of complex parts: " << compSum << endl;

    return 0;
}

// i come to know about Forward Declaration
// Friend Functions
// access specifiers and all about Friend Functions