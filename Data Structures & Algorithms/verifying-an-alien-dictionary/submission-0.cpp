class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        // I have order_index 
        // 012.....
        // hlabcdefgijkmnopqrstuvwxyz
        int rank[26];
        for(int i=0;i<26;i++){
            rank[order[i]-'a'] = i;
        }


        for(int i=0;i<words.size()-1;i++){
            string &w1 = words[i];
            string &w2 = words[i+1];

            int len = min(w1.length(),w2.length());

            bool found = false;

            for(int j=0;j<len;j++){
                if(rank[w1[j]-'a'] > rank[w2[j]-'a']){
                    return false;
                }
                if(rank[w1[j]-'a'] < rank[w2[j]-'a']){
                    // found increasing order
                    found = true;
                    break; 
                }
                // go next char 
            }

            if(!found && w1.length() > w2.length()) return false;
        
        }

        return true;


    }
};