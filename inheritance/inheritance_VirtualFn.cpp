#include<iostream>
using namespace std;

// Which function will the Base Class Pointer call when pointing to derived class object ???
class Base {
    public :
        Base() {cout << "\nBase Constructor";}
        ~Base() {cout << "\nBase Destructor";}

        void show() { cout << "\nBase show";}
        virtual void showVirtual() { cout << "\nvirtual Base show";}

};

class Derived : public Base{
    public :
        Derived() {cout << "\nDerived Constructor";}
        ~Derived() {cout << "\nDerived Destructor";}

        void show() { cout << "\nDerived show";}
        void showVirtual() override { cout << "\nvirtual Derived show";}
};

int main () {
    Base *bPtr = new Derived;       // Base Constructor - Derived Constructor

    bPtr->show();                   // Base Show
    bPtr->showVirtual();            // Virtual Derived Show

    delete bPtr;                    // Base Destructor

    return 0;
}