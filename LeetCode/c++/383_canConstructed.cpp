#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // declare map to store amount of char in magazine
        unordered_map<char,int> m;

        // counter each char in magazine
        for (char c : magazine) {
            // not found c in map
            if (m.find(c) == m.end()) {
                m.insert(make_pair(c,1));
            } else {
                m[c]++;
            }
        }

        for (char c : ransomNote) {
            // not found exist char in map
            if (m.find(c) == m.end()) {
                return false;
            }

            if (m[c] <= 0) {
                return false;
            }

            m[c]--;
        }

        return true;
    }
};

int main() {
    Solution s;
    cout << s.canConstruct("aa", "banana") << endl;
    return 0;
}