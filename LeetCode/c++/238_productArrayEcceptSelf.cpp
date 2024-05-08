#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        size_t n = nums.size();
        int sum = 1;
        vector<int> prefixProd(n, 0);
        for (size_t i = 0; i < n; ++i) {
            sum *= nums[i];
            prefixProd[i] = sum;
        }

        sum = 1;
        vector<int> suffixProd(n, 0);
        for (int i = n-1; i >= 0; --i) {
            sum *= nums[i];
            suffixProd[i] = sum;
        }

        vector<int> ans(n, 0);
        for (size_t i = 0; i < n; ++i) {
            ans[i] = (i > 0 ? prefixProd[i-1] : 1) * (i < n-1 ? suffixProd[i+1] : 1);
        }

        return ans;
    }
};

//  1  2  3  4
//  1  2  6 24
// 24 24 12  4
