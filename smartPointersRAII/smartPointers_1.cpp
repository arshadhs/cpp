#include<iostream>
#include<memory>
using namespace std;

class Base {
    int x;
    public:
    Base() { cout << "\nBase";}
    ~Base() { cout << "\nDestructing Base";}
};

class Deriverd : public Base {
    int y;
    public: 
    Deriverd() { cout << "\nDerived";}
    ~Deriverd() { cout << "\nDestructing Derived";}
};

class myClass {
    Deriverd * d;
    
    public:
        myClass(Deriverd *dObj) : d(dObj){ cout << "\nmyClass";}
        ~myClass() { cout << "\nDestructing myClass";}

        void printHello() { cout << "\nHello";}
};

void Process(std::unique_ptr<myClass> temp) {
    temp->printHello();
}

int main () {
    Deriverd dObj;

    // Implementing SMART Pointer
    //myClass * myObj = new myClass(&dObj);
    //delete myObj;

    // Unique Pointer
    // std::unique_ptr<myClass> myObj1 (new myClass(&dObj));
    // Process(std::move(myObj1));
    // myObj1->printHello();

    // Shared Pointer
    std::shared_ptr<myClass> myObjSP (new myClass(&dObj));
    //Process(std::move(myObj1));
    {
        std::shared_ptr<myClass> myObjSP2;
        myObjSP2 = myObjSP;
        myObjSP2->printHello();
        cout << "\nReference Count " << myObjSP.use_count();
    }
    myObjSP->printHello();
    cout << "\nReference Count " << myObjSP.use_count();
}