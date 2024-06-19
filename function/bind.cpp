#include <iostream>
#include<functional>

// std::bind -- binds arguments to a given function

int subtract(int x, int y) {
    return x-y;
}

// Function Object
struct GreaterThan {
    bool operator () (int x, int y) const {
        return x>y;
    }
};

int main() {

    // 1. Using placeholders with bind
    std::function<int(int,int)> f = std::bind(subtract, std::placeholders::_1, std::placeholders::_2);
    std::cout << f(3,2);

    // 1.1 replace above bind with a Lambda
    auto f1_lambda = [](int x, int y) {return subtract(x, y);};
    std::cout << std::endl << f1_lambda(3,2);

    // 2. using placeholders in different order
    using namespace std::placeholders;
    auto f1 = std::bind(subtract, _2, _1);
    std::cout << std::endl << f1(3,2);

    // 3. default argument with bind
    auto f2 = std::bind(subtract, _1, 5);
    std::cout << std::endl << f2(9);

    // 4. function object - bind
    auto gt = std::bind(GreaterThan{}, _1, _2);
    std::cout << std::endl << gt(8, 4);     // operator()(8,4)

    // 4.1 function object - lambda
    auto gt_lambda = [](int x, int y) {return GreaterThan{}(x, y);};
    std::cout << std::endl << gt_lambda(8, 4);     // operator()(8,4)


    return 0;
}