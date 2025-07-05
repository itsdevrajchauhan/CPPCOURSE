#include <iostream>
using namespace std;

// fibonacii //recursion
int fib(int x)
{
    if (x <= 1)
    {
        return x;
    }
    return fib(x - 2) + fib(x - 1); // Recursive case:return n * factorial(n - 1); → eeps calling itself with smaller value until reach base condition
}

// factorial
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// step by step calculation of factorial (n)
// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24 ;

int main()
{
    int a;
    // n! = n × (n - 1) × (n - 2) × ... × 2 × 1
    cout << "enter the number you want to string: " << endl;
    cin >> a;
    cout << "the factorial of number : " << a << " is : " << factorial(a) << endl;

    int r;
    cout << "enter the number to find fibonacci: " << endl;
    cin >> r;
    cout << "the term in fibonacci sequence it poistion : " << r << " is : " << fib(r) << endl;

    return 0;
}

// Learned  about Recursions and Recursive Functions in C++
