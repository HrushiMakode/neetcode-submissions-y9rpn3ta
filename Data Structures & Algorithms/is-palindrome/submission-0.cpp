


class Solution {
public:
    bool isPalindrome(string s) {
        string ns="";
        for(char c:s){
            if((c>='A' && c<='Z') ||( c>='a' && c<='z') ||( c>='0' && c<='9')){
                ns+=tolower(c);
            }
        }

        cout<<ns<<endl;

        string t = ns;
        reverse(t.begin(),t.end());
        return ns == t;
    }
};
