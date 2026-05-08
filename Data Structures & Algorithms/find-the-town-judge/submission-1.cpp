class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> graph(n+1); 
        for(auto edge:trust){
            graph[edge[0]].push_back(edge[1]);
        }

        vector<int> freq(n+1,0);

        for(int i=1;i<graph.size();i++){
            for(int x:graph[i]){
                freq[x]++;
            }
        }

        for(int i=1;i<freq.size();i++){
            if(freq[i] == n) return -1;
            if(freq[i]==n-1 && graph[i].size()==0){
                return i;
            }
        }
        return -1;
    }
};