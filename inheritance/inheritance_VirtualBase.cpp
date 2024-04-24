#include<iostream>
using namespace std;

class base {
   public:
    int i;
};

class d1 : virtual public base {
    public:   int j;
};

class d2 : virtual public base {
    public:   int k;
};

class x : public d1, public d2 {
     public:  int l;
};

int main()
{
    x obj;
    obj.i = 10;

    cout << "\t output: " << obj.i;

    return 0;
}
