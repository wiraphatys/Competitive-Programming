#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        bool isFound = false;
        for (size_t i = 0; i < nums.size(); ++i) {
            for (size_t j = i; j < nums.size(); ++j) {
                if (i == j) continue;
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    isFound = true;
                    break;
                }
            }
            if (isFound) break;
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    for (int e : result) {
        cout << e << endl;
    }
}