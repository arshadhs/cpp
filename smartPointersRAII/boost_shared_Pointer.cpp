#include <iostream>
#include<boost\smart_ptr\shared_ptr.hpp>
#include<boost\smart_ptr\scoped_ptr.hpp>
#include<boost\smart_ptr\make_shared.hpp>

int main ()
{
	int i = 4;
	float j = 4.5;
	int k = 5;

	//boost::shared_ptr <int> p (new int);

	boost::shared_ptr <int> p = boost::make_shared<int>();
	boost::shared_ptr <void> pV(p);

	//	boost::scoped_ptr <void> pSp(p);

	std::cout << i << std::endl;
	std::cout << j << std::endl;
	std::cout << *p << std::endl;

	p.reset(new int(k));

	std::cout << *p << std::endl;

	pV = p;
//	std::cout << *pV << std::endl;
	return 0;
}
