#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me Your Age :  " << endl;
    cin >> age;
    if ((age < 18) && (age > 0))
    {
        cout << "You are not eligible to come to party : " << endl;
    }
    else if (age == 18)
    {
        cout << "you can have kidd program : " << endl;
    }
    else if (age == 0)
    {
        cout << "you are not born: " << endl;
    }
    else
    {
        cout << "you can come to party : " << endl;
    }

    switch (age)
    {
    case 18:
    {
        cout << "you are 18" << endl;
    }
    break;

    case 2:
    {
        cout << "you are not eligible" << endl;
    }
    /* code */
    break;

    default:
    {
        cout << "please enter valid age" << endl;
    }
    break;
    }

    return 0;
}
