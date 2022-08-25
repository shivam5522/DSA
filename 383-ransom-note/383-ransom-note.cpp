class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp1,mp2;
        for(auto i:ransomNote) mp1[i]++;
        for(auto i:magazine) mp2[i]++;
        for(auto f:mp1){
            if(f.second>mp2[f.first]) return false;
        }
        return true;
    }
};