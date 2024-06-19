#include <iostream>
#include <vector>

int main() {
 
    std::vector < int > v1 { 1, 3, 5, 7};
    
    for (int i = 0; i < v1.size(); i++) 
        std::cout << v1[i] << "\t";

    std::cout << std::endl;

    // Push at the end
    for (int i = 0; i < 5; i++) 
        v1.push_back(i+10);

    for (int i = 0; i < v1.size(); i++) 
        std::cout << v1[i] << "\t";

    // Pop from the end
    v1.pop_back();
    v1.pop_back();

    std::cout << std::endl;

    // Traverse using iterator
    auto itr = v1.begin();
    while(itr != v1.end()) {
        std::cout << *itr++ << "\t";
    }

    std::cout << std::endl;

    v1.insert(v1.begin(), 500);    // Insert at any positiom, has performance issues, since the vector needs to ne shifted
    v1.erase(v1.end());             // Delete from the end
    
    auto itr1 = v1.begin();
    while(itr1 != v1.end()) {
        std::cout << *itr1++ << "\t";
    }

    return 0;
}