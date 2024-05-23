#include <iostream>
#include <utility>
 

 // exchange : Replaces the value of obj with new_value and returns the old value of obj.

// template< class T, class U = T >
//  T exchange( T& obj, U&& new_value );

int main() {
    auto func = [i = 0, j = 1]()mutable {
        i = std::exchange(j, i+j);
        return i;
    };

    // func();
    // func();
    std::cout << func() << std::endl;
    std::cout << func() << std::endl;

    std::cout << func() << std::endl;
    return 0;
}