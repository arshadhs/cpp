#include <iostream>
#include <forward_list> // no random access

void displayList(const std::forward_list < int > &l1) {
    std::cout << std::endl;
    auto itr_back = l1.begin();
    while(itr_back != l1.end())
        std::cout << *itr_back++ << "\t";
}

int main() {
    std::forward_list < int > l1 {5, 8, 9, 4, 6, 1, 32};

    displayList(l1);

    auto itr = l1.begin(); 
    std::advance(itr, 2);
    l1.insert_after(itr, 99);       // forward_list has insert_after and not insert

    displayList(l1);

    l1.erase_after(itr);            // similarly erase_after and not erase

    displayList(l1);

    return 0;
}