#include <iostream>
using namespace std;

// Forward declaration of class Y
class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }

    // Friend function declaration only (no definition here)
    friend void add(X, Y);
};

class Y
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }

    // Friend function declaration only (no definition here)
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "Summing data of X and Y objects gives me " << o1.data + o2.data << endl;
}

// Define the friend function outside the class

int main()
{
    X a;
    a.setValue(4);

    Y b;
    b.setValue(3);

    add(a, b); // Output: Summing data of
};
