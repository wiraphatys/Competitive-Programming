#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums) {
    int count = 1;
    set<int> memo;
    memo.insert(nums[0]);

    for (size_t i = 1; i < nums.size(); ++i) {
        if (memo.find(nums[i]) == memo.end()) {
            memo.insert(nums[i]);
            ++count;
        }
    }

    nums.clear();
    for (int e : memo) nums.push_back(e);

    return count;
}

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);

    cout << removeDuplicates(nums) << endl;
    for (int n : nums) cout << n << ' ';

    return 0;
}