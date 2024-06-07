#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int coinChange(vector<int> &coins, int amount) {
        vector<long long> dp(amount+1, INT_MAX);
        dp[0] = 0;

        vector<long long> c;
        for (int i = 0; i < coins.size(); ++i) {
            if (coins[i] <= amount) {
                c.push_back(coins[i]);
                dp[coins[i]] = 1;
            }
        }

        for (int i = 1; i <= amount; ++i) {
            for (int j = 0; j < c.size(); ++j) {
                if (c[j] > i) continue;
                dp[i] = min(1 + dp[i-c[j]], dp[i]);
            }
        }

        dp[amount] = (dp[amount] == INT_MAX) ? -1 : dp[amount];

        return dp[amount];
    }
};

int main() {
    vector<int> coins;
    coins.push_back(1);

    Solution s;
    cout << s.coinChange(coins, 0) << endl;
    return 0;
}