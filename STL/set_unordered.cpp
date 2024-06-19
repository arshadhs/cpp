#include <iostream>
#include<string>
#include<unordered_set>

// unordered_set does NOT allow duplicates, unordered_multiset does

void display(const std::unordered_set<std::string> &us1) {
    std::cout << std::endl;

    for (auto x : us1) {
        std::cout << "Bucket(" << us1.bucket(x) << "): " << x << " ";
    }
}


int main() {
    std::unordered_set<std::string> us1;
    us1.insert("hello");
    us1.insert("how");
    us1.insert("are");
    us1.insert("you");

    display(us1);

    std::cout<< std::endl << "Bucket: " << us1.bucket_count();
    std::cout<< std::endl << "Size: " << us1.size();
    std::cout<< std::endl << "Load Factor: " << us1.load_factor();

    return 0;
}