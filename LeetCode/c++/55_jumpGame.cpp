#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int> &nums) {
        int maxIndex = nums[0];
        for (size_t i = 0; i < nums.size(); ++i) {
            if (maxIndex >= nums.size()-1) return true;
            if (nums[i] == 0 && maxIndex == i) return false;
            if (i + nums[i] > maxIndex) maxIndex = i + nums[i];
        }
        return true;
    }
};

int main() {
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(4);

    Solution sol;
    cout << sol.canJump(nums) << endl;
    return 0;
}