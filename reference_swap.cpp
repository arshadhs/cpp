#include <iostream>>
using namespace std;

// Swap 2 variables using reference

void swap( int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int i = 10, j = 25;

    cout << endl << "i = " << i << " j = " << j;
    swap(i, j);
    cout << endl << "i = " << i << " j = " << j;

    return 0;    
}
