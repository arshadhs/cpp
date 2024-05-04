#include<iostream>
using namespace std;

// Array of objects, allocated using new

class c1 {
        int data;
    public:
        c1() { cout << endl << "parameterless constructing ...."; data = 0;} // parameterless constructor
        c1(int i) { cout << endl << "constructing...."; data = i;}
        int get_c1() { return data;}
        ~c1() { cout << endl << "destructing...."; }
};

int main()
{
    c1 *objPtr;

    try {
        objPtr = new c1[3];     // array allocated by 'new' cannot have initialser, so class should contain parameterless constructor
    }
    catch (bad_alloc x)
    {
        cout << "Allocation Failure";
        return 1;
    }

    for (int i = 0; i < 3; i++)
        cout << endl << objPtr[i].get_c1();
    
    delete[] objPtr;
    return 0;
}