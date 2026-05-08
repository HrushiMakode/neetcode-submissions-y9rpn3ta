class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> score(n+1,0);

        for(auto edge:trust){
            score[edge[0]]--; // trusting someone , can't be judge
            score[edge[1]]++; // trusted by  someone , can be judge
        }

        for(int i=1;i<n+1;i++){
            if(score[i]==n-1) return i;
        }
        return -1;
    }
};