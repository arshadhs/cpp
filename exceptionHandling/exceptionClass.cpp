#include <iostream>
#include<limits>

using namespace std;

class MyException {
    public:
        string err;
        long long what;
        MyException() : err(nullptr), what(0) {};
        MyException(const string& errStr, const int& code) : err(errStr), what(code) {};
        MyException(const string& errStr, const long long& code) : err(errStr), what(code) {};
};

int main() {
    long long i = 0;
    try {
        cout << "Enter a positive integer (0 - 2147483647): ";
        cin >> i;

        if (i < 0) {
            throw MyException("Negative!!!", i);
        }
        else if (i > numeric_limits<int>::max()) {
            throw MyException("Too big :O :: ", i);
        }
    }
    catch (MyException e) {
        cerr << e.err << " : " << e.what;
    }
    return 0;
}