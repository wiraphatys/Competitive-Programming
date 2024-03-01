#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // validate string
        if (s.length() == 0) return 0;

        vector<int> ans;

        for (size_t i = 0; i < s.length(); ++i) {
            set<char> existed;
            existed.insert(s[i]);
            for (size_t j = i+1; j < s.length(); ++j) {
                if (existed.find(s[j]) != existed.end()) break;
                existed.insert(s[j]);
            }
            ans.push_back(existed.size());
        }

        return *max_element(ans.begin(), ans.end());
    }
};