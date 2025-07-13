#include <iostream>
using namespace std;

class employee
{
private:
     int a, b, c;

public:
     int d, e;
     void setData(int a1, int b1, int c1); // declaration
     void getData()
     {
          cout << "the value of a : " << a << endl;
          cout << "value of b  " << b << endl;
          cout << "value of  C  " << c << endl;
          cout << "value of d  " << d << endl;
          cout << "value of  e  " << e << endl;
     }
};

void employee::setData(int a1, int b1, int c1) // find the setdata in employeee that why we use :: scope resultuin operater
{
     a = a1;
     b = b1;
     c = c1;
}
int main()
{
     employee raj;
     raj.setData(3, 4, 5);

     raj.d = 22;
     raj.e = 99;
     raj.getData();

     return 0;
}

// a,b,c are private for accessing the private things are accessible by only that class function
// a1,b1,c1 access private data  which have public acceess
//.d,.e are the publically accesss .a ,.b, .c are not access by .function
// it's all about classes ,public and Private acceess modifiers in C++