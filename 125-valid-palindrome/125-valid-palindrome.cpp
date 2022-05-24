class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string f="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])) f+=s[i];
        }
        int i=0,j=f.size()-1;
        while(i<j){
            if(f[i]!=f[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};