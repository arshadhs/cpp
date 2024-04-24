#include<iostream>

using namespace std;

// func 3 values and returns
int findMax(const int &x, const int &y, int const &z) {
    long long max = static_cast<long long> (x) >= y ? x : y;
    max  = max >= static_cast<long long> (z) ? max : z;

    // Actually it is needless, since the function argument is already casting it to int, so preferably test in the driver code !
    if (max > INT_MAX || max < INT_MIN) 
    {
        cerr << "Overflow occured !";
        // can throw from here
    }

    return max;
}

// Driver Code
int main () {
    // Test Vectors
    cout << endl << findMax(0, 0 , 0);                      // 0
    cout << endl << findMax(-5, 0 , 100);                   // 100
    cout << endl << findMax(INT_MAX + 1, 0 , INT_MAX);      // 2147483647

    // 9999999999           2 540B E3FF
    // 2,147,483,647        7FFF FFFF       INT_MAX 
    // 1410065407 = 540B E3FF
    cout << endl << findMax(-9999999999, 9999999999, 10);   // 1410065407

    return 0;
}