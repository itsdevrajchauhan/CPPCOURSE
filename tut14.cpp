#include <iostream>
using namespace std;

void p();
int sum(int, int); // function prototyping
int main()
{
    int num1, num2; // acutal parameter
    cout << "Enter the Number 1 : " << endl;
    cin >> num1;
    cout << "Enter the NUmber 2 : " << endl;
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "the sum of Value is  " << sum(num1, num2) << endl;

    p();
    return 0;
}

int sum(int a, int b) // formal parameter
{
    // a and b will be taking values from actual parameters num1 num2
    int c = a + b;
    return c;
}

void p() // void function not takes any value just prints
{
    cout << "hello,good morining : ";
}