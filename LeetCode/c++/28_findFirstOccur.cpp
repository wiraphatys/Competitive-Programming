#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t i = haystack.find(needle) 
        return (i == haystack.npos) ? -1 : i;
    }
};

int main() {
    string str = "hello";
    cout << str.find("elx");
}