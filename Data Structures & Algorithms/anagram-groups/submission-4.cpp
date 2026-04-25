class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> mp;
        for(string str:strs){
            string new_str = str;
            sort(new_str.begin(),new_str.end());
            if(mp.find(new_str)!=mp.end()){
                mp[new_str].push_back(str);
            }
            else{
                mp[new_str] = {str};
            }
        }
        vector<vector<string>> ans;
        for(auto &x:mp){
            ans.push_back(x.second);
        }
        return ans;
     }
};
