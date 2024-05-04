#include <iostream>
using namespace std;

// Pointer to class members
// ofeset indicating where to find  val inside the object of type c1
// Usage:: 

class c1 {

public:
    c1(int i) { val = i;}
    int val;
    int get_double() { return val*2;}

};

int main()
{
    int c1::*data;
    int (c1::*func)();
    
    c1 obj1(2), obj2(4);
    c1 *objPtr1, *objPtr2;
    objPtr1 = &obj1;
    objPtr2 = &obj2;

    data = &c1::val;
    func = &c1::get_double;

    // Different from pointer to specific instances if elements of an object
    // int *p = &c1.val;

    // accessing member by using object, use .*
    cout << "c1::val :: " << obj1.*data << " " << obj2.*data;
    cout << endl;
    cout << "c1::func - double :: " << (obj1.*func)() << " " << (obj2.*func)();

    // accessing member by using pointer to the object, use ->*
    cout << endl;
    cout << "objPtr::val -> " << objPtr1->*data << " " << objPtr2->*data;
    cout << endl;
    cout << "objPtr::func - double -> " << (objPtr1->*func)() << " " << (objPtr2->*func)();

    return 0;
}