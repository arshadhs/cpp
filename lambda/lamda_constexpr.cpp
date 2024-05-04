#include <iostream>

using namespace std;

int main() {
    int x = 10;

    // A lambda expression may be declared as constexpr
    auto fn = [&x]() constexpr { int z = 10; return x + z;};
    const int z = fn();
    cout << z << endl;

    // A lambda is implicitly constexpr if its result satisfies the requirements of a constexpr function:
    auto fn_1 = []() {return 10;};
    constexpr int z_2 = fn_1();
    cout << z_2 << endl;

    return 0;
}