#include<iostream>

namespace Calculator {
    int add(int a, int b) {
        return a+b;
    }

    int sub(int a, int b) {
        return a - b;
    }

    int (* funcPtr) (int, int) = &add;
};

int main () {
    std::cout << Calculator::funcPtr(10, 50);
    Calculator::funcPtr = &Calculator::sub;
    std::cout << (*Calculator::funcPtr)(10, 50);
    return 0;
}