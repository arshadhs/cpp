#include <iostream>
#include<functional>

// Class template std::function is a general-purpose polymorphic function wrapper.
// Instances of std::function can store, copy, and invoke any CopyConstructible Callable target -- 
    // 1. functions (via pointers thereto), 
    // 2. lambda expressions, 
    // 3. bind expressions, 
    // 4. function objects, 
    // 5. pointers to member functions,
    // 6. pointers to data members

int Double(int x) {
    return x+x;
}

class Max {
    public:
        int operator()(int x, int y) const {
            return x>y ? x : y;
        }
};

int main() {
    using namespace std;

    try {
        // Basic Function
        std::function<int(int)> f; // function provides bool operator to check it has a target
        if (f) std::cout << f(30);
        f = Double;
        if (f) std::cout << std::endl << f(3);

        // Overloaded Function operator
        Max mx;
        std::function <int(int, int)> funcOperator = mx;
        if (funcOperator) std::cout << std::endl << funcOperator(3, 4);

        // Lambda with function
        std::function<bool(int)> funcEven = [](int x){return (x%2 == 0);};
        if (funcEven) std::cout << std::endl << funcEven(7);
        if (funcEven) std::cout << std::endl << funcEven(8);
    }
    catch (const std::exception &ex) {
        std::cerr<<"Exception: " << ex.what();
    }

    return 0;
}