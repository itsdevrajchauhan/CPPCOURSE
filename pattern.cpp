#include <iostream>
using namespace std;

int main()

{

    // Printing Alphabet

    int o;
    cout << "enter the number for abcd : " << endl;
    cin >> o;
    for (int r = 0; r < o; r++)

    {
        char ch = 'A';
        for (int w = 0; w < o; w++)
        {
            cout << ' ' << ch << endl;

            ch = ch + 1;
        }
        cout << endl;
    }

    // Charecter and the  number printing

    int n;
    cout << "enter the number n: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)

        {
            
            cout << "*";
        }
        cout << endl;
    }

    cout << "hello" << endl;

    return 0;
}