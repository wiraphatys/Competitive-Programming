#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;

        while (n != 1 && s.find(n) == s.end()) {
            s.insert(n);
            int sum = 0;
            while (n != 0) {
                int t = n%10;
                sum += t*t;
                n/=10;
            }
            n = sum;
        }

        return n == 1;
    }
};

int main() {
    Solution s;
    int n;
    while(cin >> n) {
        cout << s.isHappy(n) << endl;
    }
    return 0;
}
