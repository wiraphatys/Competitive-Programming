#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string ans = "";

        if (s.length() == 1) return s;
        
        int idx = 0;
        string temp = "";
        while (idx <= (int)s.length()) {
            if (temp.length() != 0 && (idx == (int)s.length() || s[idx] == ' ')) {
                ans = temp + ' ' + ans;
                temp = "";
            } else if (s[idx] != ' ') temp += s[idx];
            idx++;
        }
        ans.pop_back();

        return ans;

    }
};

int main() {
    Solution sol;

    cout << sol.reverseWords("hello world");
    return 0;
}