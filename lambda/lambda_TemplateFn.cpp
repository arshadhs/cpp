// Using Lambda Expressions with Templates
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

template <typename T>
void negateVector(vector<T>& v) {
    for_each(v.begin(), v.end(), [](T& num){num = -num;});
}

template <typename T>
void printAll(const vector<T>& v) {
    for_each(v.begin(), v.end(), [](const T& num){cout << " " << num;});
    cout << endl;
}

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(-15);
    v.push_back(20);

    printAll(v);

    negateVector(v);

    printAll(v);

    return 0;
}