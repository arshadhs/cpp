// Handle a raised exception in the body of a lambda expression, or 
// defer exception handling to the enclosing scope
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

// ToDo: Doesn't work as expected !!!

int main()
{
    // Create a vector that contains 3 elements.
    vector<int> elements(3);

    // Create another vector that contains index values.
    vector<int> indices(3);
    indices[0] = 0;
    indices[1] = 1; // This is not a valid subscript. It will trigger an exception.
    indices[2] = 299;

    // Use the values from the vector of index values to
    // fill the elements vector. This example uses a
    // try/catch block to handle invalid access to the
    // elements vector.
    try
    {
        for_each(indices.begin(), indices.end(), [&](int index) {
            //elements.at(index) = index;
            if (index > numeric_limits< char> ::max())
                throw invalid_argument("MyFunc argument too large.");
        });
    }
    catch (const out_of_range& e)
    {
        cerr << "Caught '" << e.what() << "'." << endl;
    };
}

/*
int main() {
    vector<int> copyFrom (3);
    copyFrom[2] = 1;
    copyFrom[-1] = 10;
    copyFrom[5] = 100;

    vector<int> copyTo(3);

    try {
        auto fn = for_each(copyFrom.begin(), copyFrom.end(),
                            [&](int idx) { copyTo.at(idx) = idx; });
    }
    catch(const out_of_range& e) {
        cerr << "Caught: " << e.what() << endl;
    }

    return 0;
}
*/