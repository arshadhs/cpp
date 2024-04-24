#include<iostream>

// Value
constexpr float exp (float x, int  n) {
    return (n == 0) ? 1 :
        n % 2 == 0 ? exp(x * x, n/2) :
        exp (x * x, (n - 1)/2) * x;
}

// Reference
constexpr float expRef (const float &x , const int & n) {
    return (n == 0) ? 1 :
        n % 2 == 0 ? expRef(x * x, n/2) :
        expRef (x * x, (n - 1)/2) * x;
}

// Recursive
constexpr int fact(int x) {
    return (x == 1) ? 1 : x * fact(x-1);
}

// Compile-time template
template <typename T, int n>
constexpr int length(const T(&)[n]) {return n;}

// Class for constexpr object
class Foo {
    public:
        constexpr explicit Foo(int x) : _i(x) {}        // Q1: explicit?
        constexpr int GetValue() const { return _i;}    // Q2: constexpr with cost?
    private:
        int _i;
};

int main() {
    // Compile Time
    constexpr Foo fooObj(5);

    constexpr float x = exp(5, 2);
    constexpr float y {exp(5, 2)};

    constexpr int val = fooObj.GetValue();

    constexpr int f = fact(5);

    constexpr int nums[] { 1, 2, 3, 4, 5};

    constexpr int nums_2[length(nums)] { 1, 2, 3, 4, 5};

    // Run time
    std::cout << "The value of foo is " << fooObj.GetValue() << std::endl;

    return 0;
}