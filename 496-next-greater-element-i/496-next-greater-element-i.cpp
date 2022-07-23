class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> final;
        bool flag=true;
        map<int,vector<int>> mp;
        for(int i=0;i<nums2.size();i++) mp[nums2[i]]=vector<int>(nums2.begin()+i,nums2.end());
        for(auto i: nums1){
            flag=true;
            for(auto j:mp[i]){
                if(j>i){
                    final.push_back(j);
                    flag=false;
                    break;
                }
            }
            if(flag==true) final.push_back(-1);
        }
        return final;
    }
};