#include <iostream>
#include<fstream>

// Note: new variable in capture class ... y = x
// type is dediced from the experssion
// must be initialised
// can use reference
// can use same or different name as initialiser

int main() {

    int x{9};
    auto f = [y = x](int arg){return arg + y;};
    std::cout<<f(5);

    // Note: move and use of mutable
    std::ofstream out{"file.txt"};
    out << "Hio ";
    // ofstream is not copyable so will need to use move
    // have to use mutable because in internal implementation of lambda expression, fn call operator member fn is const
    auto write = [out = std::move(out)](std::string str)mutable{out << str;};
    write("Hello World");

    // since it is moved you can't used "out" later on
    out << "Hio ";

    return 0;
}