#include<iostream>
using namespace std;

template < typename T1>
T1 Add (T1 a, T1 b)
{
    cout << "\n Type: " << typeid(T1).name() << endl;
    return a+b;
}

template <>
string Add <string> (string a, string b)
{
    cout << "\n Type: " << typeid(string).name() << endl;
    return a+b;
}


int main()
{
    cout << Add(5,6);
    cout << Add(5.5,6.7);
    cout << Add(static_cast<string>("heloo"), static_cast<string>("World"));

}
