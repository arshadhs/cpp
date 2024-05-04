// By catching all exceptions (...) you prevent an unhandled exception from causing an abnormal program termination

#include <iostream>

using namespace std;

void xHandler (const int& ex) {
    try {
        if (ex == 0) throw(ex);
        if (ex == 99) throw(ex);
        throw("???");
    }

    catch(const int& e) {
        cerr << "Looks okay, why did you throw " << e << "?" << endl;
    }
    catch (...) {// Process all unhandled exceptions
        // Note that e is not available here !!!
        cerr << "What's this ... " << ex << endl;
    }
}

int main() {
    xHandler(0);
    xHandler(99);
    xHandler(999);
    return 0;
}