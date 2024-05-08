#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int totalGas = 0, totalCost = 0, tank = 0, ans = 0;
        for (int i = 0; i < (int)gas.size(); ++i) totalGas += gas[i];
        for (int i = 0; i < (int)cost.size(); ++i) totalCost += cost[i];
        if (totalCost > totalGas) return -1;
        for (int i = 0; i < (int)gas.size(); ++i) {
            tank += gas[i] - cost[i];
            if (tank < 0) {
                ans = i+1;
                tank = 0;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;

    vector<int> gas;
    gas.push_back(4);
    // gas.push_back(3);
    // gas.push_back(4);

    vector<int> cost;
    cost.push_back(5);
    // cost.push_back(4);
    // cost.push_back(3);

    cout << s.canCompleteCircuit(gas, cost);
}

//  1 2 3 4 5
//  3 4 5 1 2
// -2