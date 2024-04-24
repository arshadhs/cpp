#include <iostream>
#include<vector>

using namespace std;

int findMax (const vector<int> &x) {
    if (x.size() == 0) { cerr << "Empty list: "; return -1;}
    int max = 0;
    for (int i : x)
        if (max < i)
            max = i;    
    return max;
}

int main() {

    vector<int> v = {};
    cout << endl << findMax(v);

    v = {0};
    cout << endl << findMax(v);

    v = {1, 100, 5, 7, 9, -48};
    cout << endl << findMax(v);

    v = {-5, 0, 5, 99999999};
    cout << endl << findMax(v);

    v = {-5, 0, 5};
    cout << endl << findMax(v);
}


// x {}
// { 0}
// {-5, 0, 5, 99999999}
// {-5, 0.5, 5.5, 99999999}
// { 5, ......}
