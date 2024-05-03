#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string ans = "";

        while (num/1000 >= 1) {
            num -= 1000;
            ans += 'M';
        }

        while (num/500 >= 1) {
            if (num/900 >= 1) {
                num -= 900;
                ans += "CM";
                continue;
            }
            num -= 500;
            ans += 'D';
        }

        while (num/100 >= 1) {
            if (num/400 >= 1) {
                num -= 400;
                ans += "CD";
                continue;
            }
            num -= 100;
            ans += 'C';
        }

        while (num/50 >= 1) {
            if (num/90 >= 1) {
                num -= 90;
                ans += "XC";
                continue;
            }
            num -= 50;
            ans += 'L';
        }

        while (num/10 >= 1) {
            if (num/40 >= 1) {
                num -= 40;
                ans += "XL";
                continue;
            }
            num -= 10;
            ans += 'X';
        }

        while (num/5 >= 1) {
            if (num/9 >= 1) {
                num -= 9;
                ans += "IX";
                continue;
            }
            num -= 5;
            ans += 'V';
        }

        while (num >= 1) {
            if (num/4 >= 1) {
                num -= 4;
                ans += "IV";
                continue;
            }
            num -= 1;
            ans += 'I';
        }

        return ans;
    }
};

int main() {
    Solution solve;
    cout << solve.intToRoman(18);
    return 0;
}