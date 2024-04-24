#include<iostream>

// constexpr indicates that the value, or return value, is constant and, where possible, is computed at compile time
// it helps your program run faster and use less memory

constexpr long int fib(int n) {
    return (n <= 1) ? 1 : fib(n-1) + fib(n-2) ;
}

int main () {
    constexpr long int f = fib(30);
    std::cout << std::endl << "Fibonnaci: " << f;
    return 0;
}

// when debugging a non-optimised Debug build,
// you can tell whether a constexpr function is being evaluated at compile time by putting a breakpoint inside it. If the breakpoint is hit, the function was called at run-time.
// If not, then the function was called at compile time.