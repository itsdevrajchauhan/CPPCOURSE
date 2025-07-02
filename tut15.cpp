#include <iostream>
using namespace std;

int sum(int a, int b)//this is function for doing basic calculations
{
    int c = a + b;
    return c;
}




void swap(int *x, int *y)//swap funciton with address and refreence variable
{

    int temp = *x;
    *x = *y;
    *y = temp;

    cout << "this is swap value x is : " << x << endl;
}





int main()
{
    int aa = 3, bb = 5;
    cout << "the sum of a and b  is : " << sum(3, 4) << endl;

    swap(&aa, &bb); // calling swaping in main fucntion
    cout << "THE VALUE AFTER SWAP : " << aa << endl;
    return 0;
}

// call by value and call by reference in C++
// *   ------->
