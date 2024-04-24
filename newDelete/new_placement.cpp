#include <iostream>
using namespace std;

int main ()
{
    unsigned char buf[sizeof(int)*2];

    // placement new in buf
    int *ptr0 = new (buf) int (3);
    int *ptr1 = new (buf + sizeof(int)) int (5);

    cout << endl << "buf = " << (int *)buf[0];
    cout << endl << "buf = " << (int *)(buf + sizeof(int));

    cout << endl << "ptr0 = " << ptr0;
    cout << endl << "ptr0 = " << *ptr0;

    cout << endl << "ptr1 = " << ptr1;
    cout << endl << "*ptr1 = " << *ptr1;

    return 0;
}