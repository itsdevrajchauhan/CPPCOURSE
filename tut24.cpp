#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // first we need to declare the variable as static variable

public:
    void setData(void)
    {
        cout << "Enter the number of id : " << endl;

        cin >> id;
        cout << "Enter cound of YOUR ID  : " << endl;
        count++;
    }
    void getData(void)
    {
        cout << "Id of  EMployee : " << id << endl;
        cout << "Count of Your id  : " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; //throws and error //can;t access the private memebers in static function
        cout << "the value of count is  in static Fucntion IS  : " << count << endl;
    }
};
// we have to now place the varible out side of class so it takes the space of class not Object
int Employee ::count = 100; // default value is 0 we can define by our use
int main()
{
    cout << "tut24" << endl;
    Employee raj, rakesh, vishal;
    raj.setData();
    raj.getData();
    Employee::getCount();

    rakesh.setData();
    rakesh.getData();
    Employee::getCount();

    vishal.setData();
    vishal.getData();
    Employee::getCount();

    return 0;
}

// Leaned about static data members and MEthods in C++ OOPS
// Static variable data and  static  menthods /members in C ++ OOPS
//