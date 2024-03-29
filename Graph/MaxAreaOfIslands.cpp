#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {    
        int n = grid.size();
        int m = grid[0].size();

        int max_area_of_islands = 0;

        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(grid[i][j] == '1'){
                    max_area_of_islands = max(max_area_of_islands, bfs(grid, i, j));
                }
            }
        }
        return max_area_of_islands;
    }

    int bfs(vector<vector<int>>& grid, int i, int j){
        
        int n = grid.size();
        int m = grid[0].size();
        
        if(n <= i || i < 0 || m <= j || j < 0) return 0;
        if(grid[i][j] == 1) 

        vector<int> x = {0, 1, 0, -1};
        vector<int> y = {-1, 0, 1, 0};

        for(int k = 0;k < 4;k++){
            int x_index = i + x[k];
            int y_index = j + y[k];
            if(n <= x_index || x_index < 0 || m <= y_index || y_index < 0) continue;
            if(grid[x_index][y_index] == 1){
                grid[x_index][y_index] = 0;
                return 1 + bfs(grid, x_index, y_index);
            }
        }

        return 0;
    }
};
