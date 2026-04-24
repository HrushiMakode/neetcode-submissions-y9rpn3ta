class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() == t.length()){
            int freq[26] = {0};
            for(char &c:s){
                freq[c-'a']++;
            }
            for(char &c:t){
                freq[c-'a']--;
            }
            for(int &c:freq){
                if(c==0) continue;
                return false;
            }
            return true;
        }
        return false;

        // if(s.length() == t.length()){
        //     sort(s.begin(),s.end());
        //     sort(t.begin(),t.end());
        //     return  s==t;
        // }
        // return false;
    }
};
