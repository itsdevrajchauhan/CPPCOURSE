#include <iostream>
using namespace std;

int c = 333;
int main()
{

    //******* use of :: scope oprater and accessing global in local call

    /* int a,b,c;
     cout<<"enter the value of a : " <<endl;
     cin>>a;
     cout<<"enter the value of b : "<<endl;
     cin>>b;
    c=a+b;
      cout<<"the sum is "<< c<<endl;
    cout<<"the global c is "<< ::c;


 //*************float ,double and long double literals************
     float d=33.4f;
     long double e=33.4;
     cout<<"the size of 33.4 is :"<<sizeof(33.4f)<<endl;
     cout<<"the size of 33.4 is :"<<sizeof(33.4F)<<endl;
     cout<<"the size of 33.4 is :"<<sizeof(33.4l)<<endl;
     cout<<"the size of 33.4 is :"<<sizeof(33.4L)<<endl;

     cout <<"the valuse of d is "<<d<<endl<<"the value e "<<e<<endl;


        */

    // ***************Refrence Variables *******************
    float x = 344;
    float &y = x;

    cout << y << endl;
    cout << x << endl;

    // ************  Type Casting  ********************

    float f = 22.7;
    cout << "the value of f  is : " << (float)f << endl;
    cout << "the value of f is in int : " << int(f) << endl;

    return 0;
}
