#include<iostream>
#include<memory>

// weak_ptr :: Special-case smart pointer for use in conjunction with shared_ptr.
// A weak_ptr provides access to an object that is owned by one or more shared_ptr instances,
// but does not participate in reference counting.
// Use when you want to observe an object, but do not require it to remain alive.

// Required in some cases to break circular references between shared_ptr instances.

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

    // Shared Pointer
    std::shared_ptr<myClass> myObjSP = make_shared<myClass>(&dObj);
    cout << "\nReference Count " << myObjSP.use_count();

    // Weak Pointer
    std::weak_ptr<myClass> myObjSP2 = myObjSP;

    // By using a weak_ptr, you can create a shared_ptr that joins to an existing set of related instances,
    // but only if the underlying memory resource is still valid. 
    auto temp = myObjSP2.lock();
    temp->printHello();
    std::cout << endl << typeid(temp).name();   // shared_ptr

    myObjSP->printHello();
    cout << "\nReference Count " << myObjSP.use_count();

    return 0;
}