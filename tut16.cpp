#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // not recomended to use below lies with inline fuctions
    static int c = 3; // this executese only one  // meaning the default value be not used reagain
    c = c + 2;        // next tije this fuction is run,the value of c will be retained
    return a * b;
}

float moneyReceived(int currentMoney, float factor = 2.08) // factor is by default argument if user not passes any value
{
    return currentMoney * factor;
}

int main()
{
    int a, b;
    cout << "enter the value of a and b ";
    cin >> a >> b;
    int money = 10020;
    cout << "the sum of a and b is " << product(a, b) << endl;
    cout << "the sum of a and b is " << product(a, b) << endl;
    cout << "the sum of a and b is " << product(a, b) << endl;
    cout << "the sum of a and b is " << product(a, b) << endl;
    cout << "the sum of a and b is " << product(a, b) << endl;
    cout << "the sum of a and b is " << product(a, b) << endl;
    cout << "the sum of a and b is " << product(a, b) << endl;
    cout << "the sum of a and b is " << product(a, b) << endl;
    cout << "the sum of a and b is " << product(a, b) << endl;
    cout << "the sum of a and b is " << product(a, b) << endl;
    cout << "the sum of a and b is " << product(a, b) << endl;
    cout << "the sum of a and b is " << product(a, b) << endl; // 4.4 is user defined argument
    cout << "If you invest this amount of money : " << money << endl;
    cout << "rs in account , You will recive " << moneyReceived(money, 4.4) << "rs after 1 year" << endl;
    return 0;
}

// learnedd about inline function and Default arguments
// constant argument which made by const keywork which doest changed value by user or program for untouched to change