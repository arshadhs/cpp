#include <iostream>
#include<set>
#include<functional>

// implemented as binary tree
// hence eleements are always sorted
// NO random access

// using greater as a comparater, elements will be sorted in descending order
// MULTISET allows duplicate values, unlike SET which does not

void display(const std::multiset<int, std::greater<int>> &s1) {
    std::cout << std::endl;
    auto itr = s1.begin();
    while (itr != s1.end()) {
        std::cout << *itr++ << "\t";        
    }
}

int main() {
    std::multiset < int, std::greater<int>> s1 { 34, 2, 4, 4, 2};

    display(s1);
    s1.insert(29);  // insert
    display(s1);
    s1.erase(4);    // erase
    display(s1);

    // Search for an element
    auto f_itr = s1.find(21);   // search
    if (f_itr != s1.end())std::cout << "\nFound";
    else std::cout << "\nNot Found";

    std::cout << std::endl;

    // Search returns first occurence only
    // if you want all use equal_range
    // returns a pair, position of first element and the iterator to element greater than
    // if not found then first and second are end iterator
    auto found = s1.equal_range(2);
    while (found.first != found.second) {
        std::cout << *found.first++ << "\t";
    }

    return 0;
}