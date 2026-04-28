


class Solution {
public:
    bool isPalindrome(string s) {
        // Update the string first;

        string ns = "";
        for(char c:s){
            if((c>='A' && c<='Z')|| (c>='a' && c<='z') || (c>='0' && c<='9')){
                ns+=tolower(c);
            }
        }

        string rs = ns;
        reverse(rs.begin(),rs.end());
        return rs == ns;
    }
};
