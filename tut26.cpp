#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // below line means thatnon member- sumComplex function is allowed to do anything with my private info
    friend Complex SumComplex(Complex o1, Complex o2); // friend function //giving rights to SumComplex to use private function
    void printNumber()
    {
        cout << "your number is " << a << " +" << b << "i" << endl;
    }
};
Complex SumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{

    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c2.setNumber(2, 3);

    c1.printNumber();
    c2.printNumber();

    sum = SumComplex(c1, c2);
    sum.printNumber();
    return 0;
};
/*
// friend fucntions used to give permission to exchange the rights beetween fucntions to thier private and public data
1.Not in the scope of class
2.since it is not in the scope of the class,it cannot be called from the object of that class.
c.sumComplex==invalid
3.can be invoked without the help of any object
4.Usually contains the objects as arguments
5.can be delcared in private and public anywhere in the fucntion of class
6.it cannot access the memebers directly by their names and need object_name.memeber_name
to acceesss any member.

*/