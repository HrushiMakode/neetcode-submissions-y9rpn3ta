class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans = image;
        int prev_color = image[sr][sc];
        if(prev_color == color) return ans;

        int row = image.size();
        int col = image[0].size();

        int rowd[] = {-1,1,0,0};
        int cold[] = {0,0,-1,1};

        queue<pair<int,int>> q;
        ans[sr][sc] = color;
        q.push({sr,sc});

        while(!q.empty()){
            auto [i,j] = q.front();
            q.pop();

            for(int d=0;d<4;d++){
                int ni = i + rowd[d];
                int nj = j + cold[d];
                if(
                    ni >= 0 && ni< row && 
                    nj >= 0 && nj< col && 
                    ans[ni][nj] == prev_color
                ){
                    ans[ni][nj] = color;
                    q.push({ni,nj});
                }
            }
        }

        return ans;
    }
};