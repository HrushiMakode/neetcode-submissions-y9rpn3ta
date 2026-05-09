class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<int> rowCount(rows,0);
        vector<int> colCount(cols,0);

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]){
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        int ans = 0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] && (
                    rowCount[i]>1 ||
                    colCount[j]>1
                ))
                ans++;
            }
        }
        return ans;
    }
};