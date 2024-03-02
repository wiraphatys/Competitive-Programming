#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    string str = to_string(x);
    
    int idx = str.length() - 1;
    while (idx >= 0 && str[idx] == '0') str.pop_back();

    int l = (str[0] == '-' ? 1 : 0) , r = str.length()-1;
    while (l < r) {
        swap(str[l++], str[r--]);
    }

    stringstream ss;
    int ans;

    ss << str;
    ss >> ans;
    
    if (INT_MAX< ans || ans < INT_MIN) return 0;

    return ans;
}

int main() {
    int x;
    cin >> x;

    cout << reverse(x) << endl;
    return 0;
}