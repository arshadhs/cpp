#include <iostream>
using namespace std;

int main()
{
    int *p;

    try {
        p = new int[10];
    }
    catch (bad_alloc x) {
        cout << "Allocation failure";
        return 1;
    }

    for (int i = 0; i < 10; i++)
        p[i] = i+i*i;

    for (int i = 0; i < 10; i++)
        cout << "\t" << p[i];

    delete []p;
    return 0;
}