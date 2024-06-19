#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class ReverseWord {
    public:
        ReverseWord(string s) : str(s) {};

        void reverseWords() const {
            std::vector<string> temp;
            string tmpStr = "";

            for (int i = 0; i < str.length(); i++) {
                if (str[i] == ' ') {
                    temp.push_back(tmpStr);
                    tmpStr = "";
                }
                else {
                    tmpStr += str[i];
                }
            }

            temp.push_back(tmpStr);

            reverse(temp.begin(), temp.end());

            for (auto i : temp) {
                std:: cout << i << " ";
            }
        }

        // void revereseWordSwap(int i, int j) {
        //     while (i < j) {
        //         swap(str[i], str[j]);
        //     }
        //     revereseWordSwap(i++, j--);
        // }

    private:
        std::string str;
};


int main() {
    string s = "Hello   How are you!";
    ReverseWord rwObj(s);
    rwObj.reverseWords();
    // rwObj.revereseWordSwap(0, s.length());
    // cout << endl << s;

    return 0;
}