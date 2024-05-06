#include <iostream>

int main() {
    using namespace std;

    ////////////////
    const int x = 10;
    // assignment of read-only variable 'x'
    // x = 5;
    ////////////////

    ////////////////
    // Pointer to a const 
    // a pointer that points to data that is constant
    // Note that both are same:
    const char* b = "Hurray";
    char const* c = "Hello";
    c = "How";
    // assignment of read-only location '* c'
    // *c = "Hi"; 
    ////////////////
    
    ////////////////
    //  Deprecated - to pass a string literal as char* prior to C++11
    // ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
    // char* const p = "Who?";
    ////////////////

    ////////////////
    // Constant pointer to a constant
    const char* const cPtr = "Final";

    // assignment of read-only variable 'cPtr'
    // cPtr = "Not Final?";

    // assignment of read-only location '*(const char*)cPtr'
    // *cPtr = "Not Final?";

    ////////////////

    return 0;
}