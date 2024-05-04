// If placement-args are provided, they are passed to the allocation function as additional arguments.
// Such allocation functions are known as "placement new", after the standard allocation function

// 1) pass a preallocated memory
// 2) construct an object in the passed memory. 


#include <iostream>
using namespace std;

int main ()
{
    unsigned char buf[sizeof(int)*2];

    // placement new using buf
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