#include <iostream>
#include<set>
#include<functional>

// implemented as binary tree
// hence eleements are always sorted
// NO random access
// not as efficient as List for insertion / deletion, but efficient for look up

// using greater as a comparater, elements will be sorted in descending order
// Set does not allow duplicates, MULTISET does

void display(const std::set<int, std::greater<int>> &s1) {
    std::cout << std::endl;
    auto itr = s1.begin();
    while (itr != s1.end()) {
        std::cout << *itr++ << "\t";        
    }
}

int main() {
    std::set < int, std::greater<int>> s1 { 34, 2, 4, 4, 2};

    display(s1);

    s1.insert(29);
    display(s1);

    s1.erase(4);

    display(s1);

    // Search for an element
    auto f_itr = s1.find(21);
    if (f_itr != s1.end())std::cout << "\nFound";
    else std::cout << "\nNot Found";

    return 0;
}