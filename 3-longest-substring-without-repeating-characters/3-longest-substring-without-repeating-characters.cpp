class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int ans=0;
        map<char,int> temp;
        while(r<s.length()){
            temp[s[r]]++;
            while(temp[s[r]]>1){
                temp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};