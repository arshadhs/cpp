#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;  // number of test cases
    cin >> t;
    while(t--) {
        int n, k;   // array size and subarray size
        cin >> n >> k;
        std::deque<int> dq;
        int num;
        int max {0};
        for (int i = 0; i < n; i++) {
            cin >> num;
            dq.push_back(num);

            if (dq.size() < k) continue;

        //for (int i = 0; i < n - k + 1; i++) {
               auto a = *(max_element(dq.begin() + i + 1, dq.begin() + i + k));

               for_each(dq.begin() + i, dq.begin() + i + k, [](auto x){cout << "-" << x<< "-" ;});
            //   max = a > max ? a : max;
//               cout << a<< " " ;
//        }
            

        }
        cout << endl;
    }
    
    return 0;
}
