#include<iostream>
using namespace std;

class base {
    public:
    virtual void vfunc() ;//=0; //{ cout << "\nThis is base."; };
};

class derived1: public base {
    void vfunc() { cout << "\nThis is derived1."; };
};

class derived2: public base {
    void vfunc() { cout << "\nThis is derived2."; };
};

// Derived from derived2
class derived3: public derived2 {
    void vfunc() { cout << "\nThis is derived3."; };
};

// Derived from derived2 
class derived4: public derived2 {
    // But vfunc is NOT defined so use it's base vfunc2
};

int main()
{
    base *bPtr = new base;
    bPtr->vfunc();

    bPtr = new derived1;
    bPtr->vfunc();

    derived1 d1;
    bPtr = &d1;
    bPtr->vfunc(); 

    bPtr = new derived2;
    bPtr->vfunc();

    bPtr = new derived3;
    bPtr->vfunc();

    bPtr = new derived4;    // calls derived2 vfunc!
    bPtr->vfunc();

    return 0;
}