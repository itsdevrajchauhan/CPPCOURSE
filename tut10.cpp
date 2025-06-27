#include <iostream>
using namespace std;
int main()
{

    // break statement used for exit from the loop here till 34 will be printed
    int count = 50;
    for (int i = 0; i < count; i++)
    {
        cout << i << endl;
        if (i >= 34)
            break;
    }
    // continue iteration skipps if the condition matches here 14 won't be printed
    int c = 30;
    for (size_t a = 0; a < c; c--)
    {
        if (c == 14)
            continue;
        cout << c << endl;
    }

    return 0;
}

// 1.In this i learned about how to make sniipeet and use to make shortcut using in json file,
// 2.got to vscode left corner settings>snippet>cpp.json>your code for snippet,
// 3.name the prefix as snippet code shortcut key.here i used boilerplate_code
