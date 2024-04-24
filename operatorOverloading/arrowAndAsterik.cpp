#include<iostream>
using namespace std;

class Integer {
    int x;
    public:
        Integer(int y) : x{y} {}
        void setInteger(int z) {x = z;}
        int GetInteger() { return x;}
};

class IntPtr {
    Integer *mp;
    public:
        IntPtr(Integer *x) : mp(x) {}
        ~IntPtr() {}

        // Overload arrow operator
        Integer* operator -> () { return mp;}

        // Overload asterik operator
        Integer & operator * () { return *mp;}
};

int main() {
    // Object
    IntPtr iPtr = new Integer(10);

    // make object behave like a pointer
    
    // Overload arrow operator
    cout << endl << iPtr->GetInteger();
    iPtr->setInteger(5);
    cout << endl << iPtr->GetInteger();

    // overlaoded asterik operator
    (*iPtr).setInteger(50);
    cout << endl << (*iPtr).GetInteger();
}