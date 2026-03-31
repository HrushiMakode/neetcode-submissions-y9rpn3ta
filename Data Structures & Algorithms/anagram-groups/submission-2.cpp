class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string , vector<string>> map;
        for(auto str: strs){
            string newStr = str;
            sort(str.begin(),str.end());
            if(map.count(str)){
                map[str].push_back(newStr);
            }
            else{
                vector<string> v;
                v.push_back(newStr);
                map[str] = v;
            }
        }
        for(auto m:map){
            ans.push_back(m.second);
        }
        return ans;
    }
};
