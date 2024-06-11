#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int> &nums) {
        int n = nums.size();

        int l = 0;
        int sum = 0, len = INT_MAX;
        for (int r = 0; r < n; ++r) {
            sum += nums[r];
            while (sum >= target) {
                len = min(r-l+1, len);
                sum -= nums[l];
                l++;
            }
        }

        return (len == INT_MAX) ? 0 : len;
    }
};

int main() {
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(3);


    Solution s;
    cout << s.minSubArrayLen(7, nums) << endl;
    return 0;
}