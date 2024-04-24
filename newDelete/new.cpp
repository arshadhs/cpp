#include <iostream>
using namespace std;

int main()
{
    int *p;

    try{
        p = new int(555);   // allocating memory and initialising
    }
    catch (bad_alloc x)
    {
        cout << "Allocation failure";
        return 1;
    }
    
    //*p = 100;

    cout << endl << "At " << p << " value is " << *p;

    delete p;
    cout << endl << "At " << p << " value is " << *p;   // Garbage
    
    return 0;
}
