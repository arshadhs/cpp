#include <map>
#include<iostream>

// A map requires O(log(N)) time for inserts and finds operations, as it's implemented as a Binary Tree (Red-Black Tree) data structure.
// Since it uses red-black tree as the data structure, so the elements you put in there are sorted.
// The elements need to implement at least operator <

// An unordered_map (hash_table or hash_map) requires an 'average' time of O(1) for inserts and finds, but is allowed to have a worst-case time of O(N). 
// This is because it's implemented using Hash Table data structure.

// map stores pair object

typedef std::map<int, int> mymap_t;

void display(const mymap_t & m1) {
	std::cout << std::endl;
	for (mymap_t :: const_iterator it = m1.begin(); it != m1.end(); it++)
		std::cout << (*it).first << " -- "<< it->second << "\t";
}
int main()
{
	mymap_t m1;

	m1 [0] = 100;
	m1 [2] = 200;
	m1 [1] = 150;
	
	//pair needs type, make_pair doesn't
	m1.insert(std::make_pair(5, 20));	// insert
	display(m1);
	m1[1] = 99;		// modify value using subscript-key
	m1.erase(0);	// erase
	display(m1);

	auto found = m1.find(2);
	if (found != m1.end())
		std::cout << "\nFound: " << found->first << "--" << found->second;
	else 
		std::cout << "\nNot Found";
}
