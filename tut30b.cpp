#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    };
    void displayPoint()
    {

        cout << "the point is ( " << x << ",  " << y << ")" << endl;
    };
};

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point r(3, 5);
    r.displayPoint();

    return 0;
}

// understand the topics on Cunstructor and Prameterized constructor