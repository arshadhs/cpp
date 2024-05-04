#include <iostream>
#include<exception>

void myTerminate() {
    std::cout << "You throw an int, was expecting a double!!!" << std::endl;
    std::cout << "Terminate gracefully" << std::endl;
    abort();
}

int main() {
    std::set_terminate(myTerminate);

    try {
        std::cout << "Throwing an int... " << std::endl;
        throw 100;
    }
    catch(const double& ex) {
        std::cout << "I can't catch an integer!" << std::endl;
    }

    return 0;
}