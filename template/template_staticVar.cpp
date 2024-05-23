#include <iostream>

template<typename T>
void printT(const T) { 
    static int var = 10;
    std::cout << ++var << std::endl;
};
 
int main() {
    printT(1);
    printT('a');
    printT(3.14);
    printT(2);

    return 0;
}