#include<iostream>
#include<string>
#include <string.h>

using namespace std;

class Solutions {
    public:
        void reverseString(string s) {
            int i = s.length() - 1;
            for (; i >= 0; i--)
                cout << s[i];
        }

        char* myRev(char* s) {
            int len = strlen(s);
            int n = len - 1;
            for (int i = 0; i <= (len/2); i++) {
                char temp = s[i];
                s[i] = s[n];
                s[n] = temp;
                n--;
            }

            return s;
        }

        void reverseRecursion(string &s, int i, int n) {
            if (i >= n) return;
            swap(s[i], s[n]);
            reverseRecursion(s, i+1, n-1);
        }
};

int main () {
    Solutions obj;
    string str = "Hello How are you";
    obj.reverseString("Hello How are you");
    cout << endl << obj.myRev(const_cast<char *>(str.c_str()));
    obj.reverseRecursion(str, 0, str.length()-1);
    cout << endl << str;
    return 0;
}