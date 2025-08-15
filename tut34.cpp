#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }

    // when no copy constructor is found,compiler supplies its own copy constructor if programmers try to use other object data ;
    Number(Number &obj) // copy constructor
    {
        cout << "copy constructor called " << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(43), z2;

    x.display();
    y.display();
    z.display();

    Number z1(z); // copying the z value in z1 and its run's with constructor with inner funciton like copy constructor
    z1.display();

    z2 = z; // copy constructor not called asignemnt while copy constructor is not possible
    z2.display();

    Number z3 = z; // This is initialization at creation. copy contructor is invoked
    z3.display();

    return 0;
}

/*

Default constructor runs when you make a new object without giving a value (Number x;).
Parameterized constructor runs when you give a value (Number z(43);).
Copy constructor runs only when creating a new object from another object (Number z1(z);).
Assignment (z2 = z;) does not call the copy constructor — it just copies data between existing objects.
Copy constructor happens at creation, assignment happens later.

*/