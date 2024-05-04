#include <iostream>

//  this pointer
//      -> friend fn are not passed this ptr, since they are not members of the class
//      -> static member fn do not have this ptr

// ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls.
// ‘this’ pointer is available as a local variable within the body of all nonstatic functions.
// ‘this’ pointer is NOT  available in static member functions as static member functions can be called without any object (with class name).

class c1
{
    public:
        int data;

        // When local variable’s name is same as member’s name !
        // The 'this' pointer is used to retrieve the object's data
        // hidden by the local variable 'data' 
        c1(int data) { this->data = data;}

        int get_data() { return this->data; }
};

int main()
{
    using namespace std;
    class c1 c(24);

    int *ptr = &c.data;     // pointer to a public data member

    cout << "ptr = " << ptr;
    cout << endl;
    cout << "*ptr = " << *ptr;

    return 0;
}