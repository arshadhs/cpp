#include<iostream>
#include<string.h>
using namespace std;

// template with 1 Generic Types
template < typename T1>
T1 Add (T1 a, T1 b)
{
    cout << "\nType: " << typeid(T1).name() << endl;
    return a+b;
}

// overload template with 2 Generic Types
template < typename T1, typename T2>
T1 Add (T1 a, T2 b)
{
    cout << "\nType: " << typeid(T1).name();
    cout << "\nType: " << typeid(T2).name() << endl;
    return (a + std::to_string(b));
}

// overload explicitly a generic fn - specialization
template <>
string Add <string> (string a, string b)
{
    cout << "\nType: " << typeid(string).name() << endl;
    return a+b;
}

// Use standard param (char) with template fn
template <typename T1>
T1 Add (T1 a, char b)
{
    cout << "\nType: " << typeid(string).name() << endl;
    return a+b;
}

int main()
{
    cout << Add(5,6) << endl;
    cout << Add(5.5,6.7) << endl;
    cout << Add(static_cast<string>("String with "), static_cast<string>("String")) << endl;
    cout << Add(static_cast<string>("String with number: "), static_cast<int>(007)) << endl;
    cout << Add(static_cast<string>("String with Character: "), 'a') << endl;
}
