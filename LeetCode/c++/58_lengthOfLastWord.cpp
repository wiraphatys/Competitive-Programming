#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int idx = s.size()-1;
        while (s[idx] == ' ') idx--;
        for (int i = idx; i >= 0; --i) {
            if (s[i] == ' ') {
                return count;
            }
            count++;
        }
        return count;
    }
};