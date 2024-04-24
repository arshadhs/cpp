#include <iostream>
using namespace std;

//  Array of Objects
class c1
{
    private:
        int data;
        int k;
    public:
        c1(int i, int j) { data = i; k = j;}
        int get_data() { return data; }
        int get_k() { return k; }
};

int main()
{
    class c1 c[3] = {
        c1{1, 2},
        c1{2,4},
        c1{333, 3}};

    for (int i = 0; i <3; i++)
    {
        cout << endl;
        cout << c[i].get_data();
        cout << "\t" << c[i].get_k();
    }

    return 0;
}