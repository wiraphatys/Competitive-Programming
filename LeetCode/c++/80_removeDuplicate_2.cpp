#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums) {
    if (nums.empty()) return 0;

    int curVal = nums[0];
    int repeat = 1;

    auto itr = nums.begin() + 1;
    while (itr != nums.end()) {
        if (*itr == curVal) {
            repeat++;
            if (repeat > 2) {
                while (*itr == curVal) {
                    itr = nums.erase(itr);
                }
            } else {
                itr++;
            }
        } else {
            curVal = *itr;
            repeat = 1;
            itr++;
        }
    }

    return nums.size();
}

int main() { 
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);

    removeDuplicates(nums);
    for (int e : nums) cout << e << ' ';
}