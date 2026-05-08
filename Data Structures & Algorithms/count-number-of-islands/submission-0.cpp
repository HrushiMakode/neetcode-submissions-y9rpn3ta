class Solution {
public:

    void dfs(vector<vector<char>> &grid, vector<vector<int>> &vist , int i , int j){
        int drow[4] = {-1,1,0,0};
        int dcol[4] = {0,0,-1,1};

        int row = grid.size();
        int col = grid[0].size();

        vist[i][j] = 1;

        for(int d = 0;d<4;d++){
            int ni = i + drow[d];
            int nj = j + dcol[d];
            if(
                (ni>=0 && ni< row) &&
                (nj>=0 && nj<col ) &&
                !vist[ni][nj] &&
                grid[ni][nj] == '1'
            )
            dfs(grid,vist,ni,nj);
        }

    }

    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> vist(row , vector<int> (col,0) );

        int ans = 0;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] == '1' && !vist[i][j]){
                    dfs(grid,vist,i,j);
                    ans++;
                }
            }
        }

        return ans;
    }
};
