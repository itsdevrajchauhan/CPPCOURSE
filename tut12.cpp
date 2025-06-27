#include <iostream>
using namespace std;
int main()
{

    int marks[] = {2, 3, 4, 5, 6, 7, 8}; // one way to decalre and put value in array

    int mathsmarks[5]; // 2nd way to decalre and intialize the value of array //can't be empty
    mathsmarks[0] = 0;
    mathsmarks[1] = 34;
    mathsmarks[2] = 22;
    mathsmarks[3] = 21;
    mathsmarks[4] = 5;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    // This is printing MathsMarks in c++

    mathsmarks[3] = 99; // ------------> we can update the array value in middle of code bofore calling that location
    cout << mathsmarks[0] << endl;
    cout << mathsmarks[1] << endl;

    cout << mathsmarks[2] << endl;
    cout << mathsmarks[3] << endl;
    cout << mathsmarks[4] << endl;

    // Printing value using For loop i=location of aaray value
    for (int i = 0; i < 5; i++)
    {
        cout << "the value of  " << i << " is " << marks[i] << endl;
    }

    // Quicz -by code with harry
    // do this same work in while and do-while loop

    // while loop quize
    int a = 0;
    while (a < 5)
    {
        cout << "the value of this location in array   " << a << " is :  " << mathsmarks[a] << endl;
        a++;
    }

    // do-while loop quize
    int f = 0;
    do
    {
        cout << "the value of this aaray in this address " << f << "is : " << mathsmarks[f] << endl;
        f++;

    } while (f < 3);
    

    // Pointers in  Array in C++
    int *p = marks;
    cout << "the value of marks marks[] is : " << *p << endl;
    cout << "the value of marks marks[] is : " << *(p + 1) << endl;
    cout << "the value of marks marks[] is : " << *(p + 2) << endl;
    cout << "the value of marks marks[] is : " << *(p + 4) << endl;
    cout << *(p++) << endl;
    cout << p << endl;

    return 0;
}

// aaray
