
#include <iostream>
using namespace std;

class c2;

class c1
{
    int val;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val = a;
    }
    void display(void)
    {
        cout << val << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int tem = x.val;
    x.val = y.val2;
    y.val2 = tem;
}
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(0);
    oc2.indata(1);

    cout << "Before exchange:" << endl;
    oc1.display(); // Output: 0
    oc2.display(); // Output: 1

    exchange(oc1, oc2); // ✅ Proper function call

    cout << "After exchange:" << endl;
    oc1.display(); // Output: 1
    oc2.display(); // Output: 0

    return 0;
}

// data replacement using the friend function withing classes