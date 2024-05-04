#include <iostream>
#include<boost\_shared_Pointer.cpp>
//#include <C:\study\boost_1_39_0\boost\smart_ptr\shared_ptr.hpp>

//ToDo: Fix Compilation issue

int main ()
{

	int i = 4;
	float j = 4.5;
	int k = 5;

	boost::shared_ptr <int> p (new int);
	boost::shared_ptr <void> pV(p);

	std::cout << i << std::endl;
	std::cout << j << std::endl;
	std::cout << *p << std::endl;

	p.reset(new int(k));
	std::cout << *p << std::endl;

	pV = p;
//	std::cout << *pV << std::endl;
	return 0;
}
