#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Using Function with 2 arguments  : " << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Using Function with 3 arguments  : " << endl;
    return a + b + c;
}

// calculate the valume of a cylinder
int volume(double r, int h)
{
    return (3.145 * r * r * h);
}

// caluclate the value of cube
int volume(int a)
{
    return a * a * a;
}

// calculate the valoume of rectangular box
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    cout << "the sum of 3 and 4  is : " << sum(3, 4) << endl;
    cout << "the sum of 3 and 4 and 5  is : " << sum(3, 5, 4) << endl;
    cout << "the valume of  cyl9inter is  :  " << volume(4, 5) << endl;
    cout << "the valume of  cube is  :  " << volume(3, 5, 6) << endl;
    cout << "the valume of  rectunglar is  :  " << volume(3) << endl;
    return 0;
}

// Here i learnt about all the fuction overloading concept
// you can see same funcation name with but with diffrent number of argument in function
// makes them seperate
