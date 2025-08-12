#include <iostream>
using namespace std;

class Complex
{

    int a, b;

public:
    Complex(int, int); // constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(int x, int y) // this is parameterized constructor han takes two parameter
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    Complex a(2, 3);

    // explicit call
    Complex b = Complex(2, 3);
    a.printNumber();
    b.printNumber();

    return 0;
}

// parameters constuctur can take any number of parameter