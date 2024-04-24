#include <iostream>
using namespace std;

// Reference
void neg_reference(int &x)
{
    x = x * -1;
}

// Using Pointers, need *
void neg(int *x)
{
    *x = *x * -1;
}

int main()
{
    // Pointer
    int x = 10;
    cout << x << " negated is ";
    neg(&x);
    cout << x;

    cout << endl;

    // Reference
    int z = 20;
    cout << z << " negated is ";
    neg_reference(z);
    cout << z;
    return 0;
}