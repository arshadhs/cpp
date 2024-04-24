#include <iostream>
using namespace std;

//  pointer to data member
class c1
{
    public:
        int data;
        c1(int i) { data = i;}
        int get_data() { return data; }
};

int main()
{
    class c1 c(24);

    int *ptr = &c.data;
    cout << "ptr = " << ptr;
    cout << endl;
    cout << "*ptr = " << *ptr;

    return 0;
}