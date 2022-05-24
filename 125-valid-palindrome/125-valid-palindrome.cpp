class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            // cout<<s[i]<<" "<<s[j]<<endl;
            if(isalnum(s[i]) && isalnum(s[j])){
                if(tolower(s[i])!=tolower(s[j])) return false;
                i++;
                j--;
            }
            else if(isalnum(s[i])) j--;
            else if(isalnum(s[j])) i++;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};