/*
Lambda: defins an anonymous function object (a closure) right at the location where it's invoked or passed as an argument to a function

1) capture clause   (Also known as the lambda-introducer in the C++ specification.)
2) parameter list   (Also known as the lambda declarator)       Optional
3) mutable specification                                        Optional
4) exception-specification                                      Optional
5) trailing-return-type                                         Optional
6) lambda body
*/
#include <iostream>

int main () {
    using namespace std;

    auto fn = [](int a, int b) {return a + b;};
    cout << fn(7, 3) << endl;

    auto n = [](int a, int b) { return a-b; } (7, 5);   // when followed by (), calls lambda expression immediately
    cout << n << endl;

    return 0;
}