#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        bool isNegative = false;
        int n = s.length();
        int i = 0;
        int ans = 0;

        while (i < n && s[i] == ' ') i++;

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            isNegative = (s[i] == '-');
            ++i;
        }

        while (i < n && '0' <= s[i] && s[i] <= '9') {
            ans = ans * 10 + (s[i] - '0');

            if (!isNegative && ans > INT32_MAX) {
                return INT32_MAX;
            } else if (isNegative && -ans < INT32_MIN) {
                return INT32_MIN;
            }
            i++;
        }

        return ans;
    }
};