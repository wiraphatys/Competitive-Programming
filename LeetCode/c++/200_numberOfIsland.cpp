#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void BFS(vector<vector<char> > &grid, int row, int col) {
        queue<pair<int, int>> q;
        q.push(make_pair(row,col));
        grid[row][col] = 2;
        while (!q.empty()) {
            pair<int,int> p = q.front();
            int i = p.first;
            int j = p.second;
            q.pop();
            
            // upper
            if (i > 0 && grid[i-1][j] == '1') {
                q.push(make_pair(i-1, j));
                grid[i-1][j] = 2;
            }

            // lower
            if (i < grid.size()-1 && grid[i+1][j] == '1') {
                q.push(make_pair(i+1, j));
                grid[i+1][j] = 2;
            }

            // left
            if (j > 0 && grid[i][j-1] == '1') {
                q.push(make_pair(i, j-1));
                grid[i][j-1] = 2;
            }

            // right
            if (j < grid[0].size()-1 && grid[i][j+1] == '1') {
                q.push(make_pair(i, j+1));
                grid[i][j+1] = 2;
            }
        }
    }

public:
    int numIslands(vector<vector<char> > &grid) {
        int counter = 0;

        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                if (grid[i][j] != '1') {
                    continue;
                }
                ++counter;
                BFS(grid, i, j);
            }
        }

        return counter;
    }
};

int main() {
    return 0;
}