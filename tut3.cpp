#include <iostream>
using namespace std;

int glo = 99;
void sum()
{
    int a;
    cout << glo << "this is global" << endl;
}

int main()
{
    int glo = 43;
    glo = 34333232;
    int a = 3, b = 5;
    float pi = 3.23;
    char c = 'd';
    bool is_true = true;
    cout << is_true << "this is bull";
    cout << "This is Tutorial 4 " << "\n This is A value  : " << a << " This is Value of B : " << b << endl;
    cout << "the valuse of pi is : " << pi;
    cout << "this is char " << c;
    cout << glo;
    sum();

    return 0;
}

/*
1) Here i Learned about all data type and there usage by the program
2) Also learned about Global Scope of variable and Local scope .
Global Variable: Declared outside all functions (usually at the top of the file). Available throughout the program.

Local Variable: Declared inside a function or block. Only accessible within that function/block.


  a)gloabal and  Local veriable with same name then LOCAL is firstly prefered
  b)Local variable with same name can be updated within a code by reassining the value of variable
  c)global variable and local variable can be run
  d) Local is not Accisable from outside of function/block

*/