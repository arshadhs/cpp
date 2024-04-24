#include<iostream>
using namespace std;

// Virtual Fn using Base Class Reference

class base {
    public:
    virtual void vfunc() { cout << "\nThis is base."; };
};

class derived1: public base {
    void vfunc() { cout << "\nThis is derived1."; };
};

class derived2: public base {
    void vfunc() { cout << "\nThis is derived2."; };
};

void f(base &obj)
{
    obj.vfunc();
}

int main()
{
    base *bPtr = new base;
    f(*bPtr);

    derived1 d1;
    f(d1);

    derived2 d2;
    f(d2);

    return 0;
}