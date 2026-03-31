class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string , vector<string>> mp;
        for(string str:strs){
            string nstr = str;
            sort(nstr.begin(),nstr.end());
            if(mp.count(nstr)){
                mp[nstr].push_back(str);
            }
            else{
                mp[nstr] = {str};
            }
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
