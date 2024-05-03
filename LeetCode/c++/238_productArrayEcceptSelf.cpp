#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        int countZero = 0;
        int n = nums.size();
        int total = 1;
        vector<bool> isZero(n, false);
        vector<int> ans(n, 1);

        for (int i = 0; i < n; ++i) {
            if (nums[i] == 0) {
                countZero++;
                isZero[i] = true;
                continue;
            }
            total *= nums[i];
        }

        for (int i = 0; i < n; ++i) {
            if (countZero > 1) {
                ans[i] = 0;
            } else if (countZero == 1) {
                if (isZero[i]) {
                    ans[i] = total;
                } else {
                    ans[i] = 0;
                }
            } else {
                ans[i] = total / nums[i];
            }
        }

        return ans;
    }
};

