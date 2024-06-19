#include <iostream>
#include <array>
#include <iterator>

int main() {
    std::array <int, 5> a1{1, 5};       // Uniform Initialisation syntax
    std::cout << "Size: " << a1.size() << std::endl;    // Size

    for (auto i : a1)
        std::cout << i << "\t";

    std::cout << std::endl;

    // Iterator
    for (auto itr = a1.begin(); itr < a1.end(); ++itr) {       
        std::cout << itr << " = " << *itr << "\t";
    }
        
    return 0;
}