#include<iostream>
using namespace std;

// Which function will the Base Class Pointer call when pointing to derived class object ???
class Base {
    public :
        Base() {cout << "\nBase Constructor";}
        ~Base() {cout << "\nBase Destructor";}

        void show() { cout << "\nBase Show";}
};

class Derived : public Base{
    public :
        Derived() {cout << "\nDerived Constructor";}
        ~Derived() {cout << "\nDerived Destructor";}

        void show() { cout << "\nDerived Show";}
};

int main () {
    Base *bPtr = new Derived;       //  Base Constructor - Derived Constructor
    bPtr->show();                   //  Base Show
    delete bPtr;                    //  Base Destructor

    return 0;
}