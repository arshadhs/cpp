#include <iostream>
using namespace std;

//  pointer to derived type
// Note : Base Pointer can not access derived member when pointing to derived object

class base
{
        int data;
    public:
        base(int i) { this->data = i;}
        int get_data() { return this->data; }
};

class derived : public base
{
        int der_data;
    public:
        derived(int i) : base(i*99) { der_data = i;}
        int get_derData() { return der_data;}
};

int main()
{
    base *bPtr;
    derived *derPtr;
    
    derived dObj(5);

    bPtr = &dObj;
    derPtr = &dObj; 
   
    cout << "bPtr = " << bPtr->get_data();;
    cout << endl;

    // can't access derived member with base ptr
    // cout << "bPtr = " << bPtr->get_derData();;

    // however you can cast as base ptr to derived class and then access derived class data members
    cout << "((derived *)bPtr)->get_derData = " << ((derived *)bPtr)->get_derData();
    cout << endl;

    cout << "derPtr->get_data = " << derPtr->get_data();
    cout << endl;
    cout << "derPtr->get_derData = " << derPtr->get_derData();

    return 0;
}