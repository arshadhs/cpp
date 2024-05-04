#include<iostream>
#include<memory>

// std::unique_ptr :: a smart pointer introduced in C++11.
// It automatically manages the dynamically allocated resources on the heap.

// Smart pointers are just wrappers around regular old pointers that help you prevent widespread bugs.

// Namely, forgetting to delete a pointer and causing a memory leak or accidentally deleting a pointer twice or in the wrong way.
// They can be used in a similar way to standard pointers. They automate some of the manual processes that cause common bugs.

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

    // Unique Pointer
    
    //     std::unique_ptr<myClass> myObj1 (new myClass(&dObj));
    
    std::unique_ptr<myClass> myObj1 = make_unique<myClass>(&dObj);

    Process(std::move(myObj1));
    myObj1->printHello();
    Process(std::move(myObj1));

    return 0;
}