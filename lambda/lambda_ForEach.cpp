#include <iostream>

template < typename T, int size, typename Callback>
void ForEach(T(&arr)[size], Callback operation) {
    for (int i = 0; i < size; i++) {
        operation(arr[i]);
    }
}

int main() {
    using namespace std;
    int arr[]{1, 2, 3, 4};    
    ForEach(arr, [](auto x){ cout<< x <<" "; } );       // Print Array
    cout << endl;

    ForEach(arr, [](auto &x){ x++; } );                 // Increment Array values
    ForEach(arr, [](auto x){ cout<< x <<" "; } );
    cout << endl;

    int offset = 5;
    ForEach(arr, [offset](auto &x){ x+=offset; });      // Add offset
    ForEach(arr, [](auto x){ cout<< x <<" "; } );
    cout << endl;

    ForEach(arr, [&offset](auto &x){ x+=offset; offset++;});    // Add offset and increment offset(pass by reference)
    ForEach(arr, [](auto x){ cout<< x <<" "; } );
    cout << endl;

    return 0;
}