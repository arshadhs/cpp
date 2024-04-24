#include <iostream>
using namespace std;

// return a reference from a function
char & replace(int i);

char s[80] = "Hello there";

int main()
{
    cout << endl << s;

    // when a function returns a reference you can use it on the left hand side of an assignment
    replace(5) = 'X';

    cout << endl << s;
    return 0;
}

char & replace(int i)
{
    return s[i];
}