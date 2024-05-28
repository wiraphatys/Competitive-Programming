#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // clean the input
        string str = "";
        for (char c : s) {
            if (65 <= c && c <= 90) {
                str += c+32;
            } else if ((97 <= c && c <= 122) || (48 <= c && c <= 57)) {
                str += c;
            }
        }

        // execute validate palindrome
        string::iterator left = str.begin();
        string::iterator right = str.end()-1;

        while (left < right) {
            if (*left != *right) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};

int main() {
    string s;
    cin >> s;
    Solution sol;
    cout << sol.isPalindrome(s) << endl;
    return 0;
}