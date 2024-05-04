#include<iostream>
#include<memory>

// Implementing Smart Pointer

// Create a Smart Pointer class which can hold a pointer to any class object and 
// Delete the pointer when Smart Pointer class destructor is called.

// Since the smart pointer should behave like a pointer, it should support the same interface as pointers do;
// i.e., they should support the following operations.
    // 1) Dereferencing (operator *)
    // 2) Indirection (operator ->)

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

// Generic Smart Pointer Class

template <typename T>
class mySmartPointer {
    T * pObjDerived;    // Generic pointer to be stored
    
    public:
        mySmartPointer(T *dObj) : pObjDerived(dObj){ cout << "\nmySmartPointer";}
        ~mySmartPointer() {cout << "\nDestructing mySmartPointer"; delete pObjDerived;}

        void printHello() { cout << "\nHello";}

    // 1) Dereferencing (operator *)
    T& operator* ()
    {
        return *pObjDerived;
    }

    // 2) Indirection (operator ->)
    T* operator-> ()
    {    
        return pObjDerived;
    }
};

int main () {
    
    mySmartPointer<Deriverd> myObj(new Deriverd());
    // Dont need to delete Deriverd pointer.

    return 0;
}