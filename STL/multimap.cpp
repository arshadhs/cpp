#include <map>
#include<iostream>

// A multimap allows duplicates, unlike an map
// NOTE: multimap hasn't got subscript operator [] overloaded

typedef std::multimap<int, int> mymap_t;

void display(const mymap_t & m1) {
	std::cout << std::endl;
	for (mymap_t :: const_iterator it = m1.begin(); it != m1.end(); it++)
		std::cout << (*it).first << " -- "<< it->second << "\t";
}
int main()
{
	mymap_t m1;    
	// m1 [0] = 100;
	
	//pair needs type, make_pair doesn't
	m1.insert(std::make_pair(5, 500));	// insert
    m1.insert(std::make_pair(5, 50));	// insert
    m1.insert(std::make_pair(2, 20));	// insert
	display(m1);
	m1.erase(0);	// erase
	display(m1);

	auto found = m1.find(2);
	if (found != m1.end())
		std::cout << "\nFound: " << found->first << "--" << found->second;
	else 
		std::cout << "\nNot Found";

    // Find all matching using equal_range
    std::cout << std::endl;
    auto eq = m1.equal_range(5);
    while (eq.first != eq.second) {
        std::cout << eq.first->first << " -- " << eq.first->second << "\t";
        eq.first++; // increment the iterator
    }
}