/*
find_if using lambda
*/

#include <iostream>
#include<list>
#include<algorithm>

int main () {
    using namespace std;

    list<int> numbers;
    numbers.push_back(1);
    numbers.push_back(11);
    numbers.push_back(21);
    numbers.push_back(10);
    numbers.push_back(100);

    const list<int>::const_iterator it =
        find_if(numbers.begin(), numbers.end(),
            [](int n){
                return (n %2) == 0;
            });

    if (it == numbers.end())
        cout << "\nNo even number found in the list!";
    else
        cout << "\nFirst even number in the list is: " << *it;

    return 0;
}
