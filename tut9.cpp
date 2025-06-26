#include <iostream>
using namespace std;

int main()
{
    /*
    there are three types of loops in c++
    1.for loop
    2.while loop
    3.do-While loop

    */

    // for loop until the condition satisfies
    for (int i = 0; i < 8; i++)
    {
        cout << "This is for loop : " << i << endl;
    }

    // while loop while  true statement
    int a = 3;
    while (a < 20)
    {
        cout << a << endl;
        a++;
    }

    // do while loop -first run then condition check
    int x = 2;
    do
    {
        cout << x << endl;
        x++;

    } while (x < 40);

    // Task to print 6 ka table

    int table = 6;
    do
    {
        cout << table << endl;
        table = table + 6; // updation of the table using replacement and updation chuki c++ takes updated value
    } while (table <= 60);

    return 0;
}

// whith true statement till the loop will run otherwise terminate
// we Can make infinite loop in all loops type  replacing conditonn with True keyword
