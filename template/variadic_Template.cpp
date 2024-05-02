/*
Ellipsis (...) with C++ variadic templates.

A variadic template is a class or function template that supports an arbitrary number of arguments.
Can apply it to : (1) class templates and (2) function templates.
*/
#include <iostream>

using namespace std;

template<typename T>
void print(T t1) {
    cout << t1 << endl;
}

// An ellipsis is used in two ways by variadic templates:
// - To the left of the parameter name, it signifies a parameter pack.
// - To the right of the parameter name, it expands the parameter packs into separate names.

template<typename First, typename ... T>
void print(const First& first, const T&... arg) {
    cout << first << ", ";
    print(arg...);
}

int main() {
    print (1);
    print (100, 200);
    print ("Hello", "How");

    return 0;
}