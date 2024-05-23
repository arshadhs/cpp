#include <iostream> 

// https://www.geeksforgeeks.org/cpp-17-fold-expressions/
// Fold expressions in C++17 are a powerful feature that allows you to reduce or “fold” a parameter pack over a binary operator.
// introduced to simplify code that operates on variadic templates and make it more concise and readable.

// Syntax
// ( pack op ... )	(1)	Unary Right Fold
// ( ... op pack )	(2)	Unary Left Fold
// ( pack op ... op init )	(3)	Binary Right Fold
// ( init op ... op pack )	(4)	Binary Left Fold

using namespace std; 

template <typename... Args> bool all(Args... args) 
{ 
    return (... && args); 
} 

int main() 
{ 
    bool b = all(true, true, true, false); 
    cout << "Result: " << boolalpha << b << endl; 
    return 0; 
}