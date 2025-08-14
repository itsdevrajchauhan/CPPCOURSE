#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 14) // default argument here it will print only if  value is not given
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};

void Simple::printData()
{
    cout << "the value of data1 and data2 and data3  is " << data1 << " and " << data2 << " and " << data3 << endl;
}
int main()
{
    Simple s(22, 33);
    s.printData();

    return 0;
}

/*

a default argument is a Value the Compiler automatically uses
if You don't pass anything for that parameter


a = 22 (you gave it)
b = 33 (you gave it)
c = 14 (you didn’t give it, so default is used)




*/