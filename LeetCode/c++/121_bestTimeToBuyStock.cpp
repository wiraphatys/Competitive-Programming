#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        std::ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int maxProfit = 0;
        int minPrice = INT_MAX;

        for (size_t i = 0; i < prices.size(); ++i) {
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};

int main() {
    vector<int> prices;
    prices.push_back(7);
    prices.push_back(1);
    prices.push_back(5);
    prices.push_back(3);
    prices.push_back(6);
    prices.push_back(4);

    Solution sol;

    cout << sol.maxProfit(prices) << endl;
    return 0;
}