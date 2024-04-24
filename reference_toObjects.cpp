#include <iostream>
using namespace std;

// Passing reference as an object

class c1{
    public:
        int val;
        c1() { cout << "\n Empty Constructor";}
        c1(int i) { cout << "\nConstructor"; val = i;}      
        ~c1() { cout << "\nDestructor"; }

        void neg (c1 &obj) { obj.val = -val;}
};

int main()
{
    c1 obj(7);

    cout << endl << obj.val << " negated is ";
    obj.neg(obj);
    cout << obj.val;
    
    return 0;    
}