#include <iostream>
#include<functional>

// Usage of std::function - implement callback

int Add(int x, int y) { return x+y; }
int Subtract(int x, int y) { return x-y;}

int operation(int x, int y, std::function<int(int, int)> callback) {
    return callback(x, y);
}

int main() {
    using namespace std;

    try {
        // Basic Function
        std::function<int(int, int)> f = Add;
        if (f) std::cout << operation(30, 40, Add);
        f = Subtract;
        if (f) std::cout << std::endl << operation(30, 40, Subtract);
    }
    catch (const std::exception &ex) {
        std::cerr<<"Exception: " << ex.what();
    }

    return 0;
}