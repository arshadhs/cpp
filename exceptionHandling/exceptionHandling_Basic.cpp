#include <iostream>

using namespace std;

int main() {
    try {
        throw 100l;
    }
    catch (long i) {
        cerr << "Found " << i;
    }
    return 0;
}