#include<iostream>
using namespace std;


// Which function will the Base Class Pointer pointing to derived witll call???
class Base {
    public :
        void show() { cout << "\nBase";}
        virtual void showVirtual() { cout << "\nvirtual Base";}
};

class Derived : public Base{
    public :
        void show() { cout << "\nDerived";}
        void showVirtual() override { cout << "\nvirtual Derived";}
};

int main () {
    Base *bPtr = new Derived;

    bPtr->show();
    bPtr->showVirtual();

    return 0;
}