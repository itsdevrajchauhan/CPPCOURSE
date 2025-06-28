#include <iostream>
using namespace std;

struct employee // struct is used as various data type as work in single data type as struct
{
    int eid;      // 4 byte
    char favchar; // 1 byte
    float salary; // 4 byte
};

// mn of is another way to make struct and use in shortcut way
typedef struct manager
{
    int eid;
    char favchar;
    float slary;
} mn;

union money // using only one data if //union species the value of maximum byte used in function
{
    // 4 byte
    int rice;
    char car;
    float pounds;
};

int main()
{

    // enum used for the the index of the enum data like here breakfast =0, lunch=1,dinner=2

    enum meal
    {
        breakfast,
        lucnh,
        dinner
    };
    meal m1 = breakfast;
    cout << (m1 != 2) << endl;
    cout << breakfast << endl;
    cout << lucnh << endl;
    cout << dinner << endl;

    // another way to call the stuctu using shortcut
    mn rama;
    rama.slary = 34;
    rama.favchar = "r";

    // union used for only if one data type is required from the 5 data type in that union data type
    union money paisa;
    paisa.rice = 33;

    struct employee raj; // sturct data type exapme various data type used in this to make mixture data type
    raj.eid = 11;
    raj.salary = 1234566;
    cout << "The eid of emplyoee raj is : " << raj.eid << endl;
    cout << "the favchar of raj is : " << rama.favchar << endl;
    cout << "the slalry of raj is : " << raj.salary << endl;
    cout << "The Salary of Managers  : " << rama.slary << endl;
    cout << "the price of rice :  " << paisa.rice << endl;

    return 0;
}

// sturctures , union ,  Enum in c++