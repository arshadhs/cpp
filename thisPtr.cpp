#include <iostream>
using namespace std;

//  this pointer
//      -> friend fn are not passed this ptr, since they are not members of the class
//      -> static member fn do not have this ptr
class c1
{
    public:
        int data;
        c1(int i) { this->data = i;}
        int get_data() { return this->data; }
};

int main()
{
    class c1 c(24);

    int *ptr = &c.data;     // pointer to a public data member

    cout << "ptr = " << ptr;
    cout << endl;
    cout << "*ptr = " << *ptr;

    return 0;
}