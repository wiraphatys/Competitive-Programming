#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums) {
    map<int, int> m;

    for (int e : nums) {
        if (m.find(e) == m.end()) m[e] = 1;
        else m[e]++;
    }

    int maxVal = 0;
    int maxKey;
    for (pair<int,int> p : m) {
        if (p.second > maxVal) {
            maxVal = p.second;
            maxKey = p.first;
        }
    }

    return maxKey;
}