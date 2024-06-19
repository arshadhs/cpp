#include <iostream>
#include <list> // no random access

void displayList(const std::list < int > &l1) {
    std::cout << std::endl;
    auto itr_back = l1.begin();
    while(itr_back != l1.end())
        std::cout << *itr_back++ << "\t";
}

int main() {
    std::list < int > l1{5, 8};

    displayList(l1);

    for (int i = 0; i < 5; i++)
        l1.push_back(i*10);

    displayList(l1);

    auto itr = l1.begin(); 
    std::advance(itr, 2);
    l1.insert(itr, 99);

    displayList(l1);

    l1.erase(itr);

    displayList(l1);

    return 0;
}