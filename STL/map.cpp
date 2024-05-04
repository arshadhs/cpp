#include <map>
#include<iostream>

typedef std::map<int, int> mymap_t;

int main()
{
	mymap_t linkset;
	mymap_t :: iterator it;

	linkset [0] = 100;
	linkset [2] = 200;
	linkset [1] = 150;
	
	for (it = linkset.begin(); it != linkset.end(); it++)
		std::cout << (*it).first << " -- "<< it->second <<std::endl;
}
