#include <iostream>
using namespace std;

class Complex {
    int a, b; // <-- missing in your version

public:
    // Default constructor
    Complex() {}

    // Parameterized constructor
    Complex(int v1, int v2) {
        a = v1;
        b = v2;
    }

    // Function to add two complex numbers
    Complex add(Complex o) {
        Complex result;
        result.a = a + o.a;
        result.b = b + o.b;
        return result;
    }

    // Function to print complex number
    void printNumber() {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = c1.add(c2);

    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}
