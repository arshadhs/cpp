/// Rethrowing an exception
/// Call throw with nno exception

/// Note: An exception can only be thrown from within a catch block

#include <iostream>
#include <limits>
using namespace std;

void xHandler (int ex) {
    try {    
        if (ex <0 || ex  > numeric_limits<int>::max()) throw ("Too small or too big!!!");
        else throw (ex);
    }
    catch(const int &e) {
        cerr << e << " looks okay, isn't it?" << endl;
    }
    catch(...) {
        throw;  // rethrow out of the function, note that it will propogate out
    }
}

int main() {
    try {
        xHandler(999);
        xHandler(-1);   // causes xHandler to throw a string !
    }
    catch (...) {
        cerr << "Caught a rethrow ;)" << endl;
    }

    cout << "I am done :)" << endl;

    return 0;
}