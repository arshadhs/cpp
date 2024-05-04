#include<iostream>
#include<memory>

// shared_ptr :: Reference-counted smart pointer. Use when you want to assign one raw pointer to multiple owners
// std::shared_ptr :: one of the smart pointers introduced in C++11.

// Unlike a simple pointer, it has an associated "Control Block" that keeps track of the "Reference Count" for the "Managed Object".
// This reference count is shared among all the copies of the shared_ptr instances pointing to the same object,
// ensuring proper memory management and deletion.

// The size is two pointers:
// 1) "one for the object"
// 2) one for the shared control block that contains the "reference count"

// shared_ptr is threads safe and not thread safe. [what is this??]
// 1) Control block is thread safe
// 2) Managed object is not

using namespace std;

class Base {
    int x;
    public:
    Base() { cout << "Base" << endl;}
    ~Base() { cout << "Destructing Base" << endl;}
};

class Deriverd : public Base {
    int y;
    public: 
    Deriverd() { cout << "Derived" << endl;}
    ~Deriverd() { cout << "Destructing Derived" << endl;}
};

class myClass {
    Deriverd * d;
    
    public:
        myClass(Deriverd *dObj) : d(dObj){ cout << "myClass" << endl;}
        ~myClass() { cout << "Destructing myClass" << endl;}

        void printHello() { cout << "Hello" << endl;}
};

int main () {
    Deriverd dObj;

    // Shared Pointer
    std::shared_ptr<myClass> myObjSP = make_shared<myClass>(&dObj);

    {
        std::shared_ptr<myClass> myObjSP_2;
        myObjSP_2 = myObjSP;
        myObjSP_2->printHello();
        cout << "(Inside Scope) Reference Count " << myObjSP_2.use_count() << endl;
        cout << "(Inside Scope) Address: " << myObjSP_2.get() << endl;
    }

    myObjSP->printHello();
    cout << "Reference Count " << myObjSP.use_count() << endl;

    // printing addresses
    cout << "Address: " << myObjSP.get() << endl;
 
    // Relinquishes ownership of myObjSP on the object
    // and pointer becomes NULL
    myObjSP.reset();
    cout << "Address: " << myObjSP.get() << endl;
    cout << "Reference Count " << myObjSP.use_count() << endl;

    return 0;
}