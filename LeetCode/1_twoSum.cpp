#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> m;

        for (size_t i = 0; i < nums.size(); ++i) {
            int leftValue = target - nums[i];

            if (m.find(leftValue) != m.end()) {
                result.push_back(m[leftValue]);
                result.push_back(i);
                break;
            }
            m.insert(make_pair(nums[i], i));
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