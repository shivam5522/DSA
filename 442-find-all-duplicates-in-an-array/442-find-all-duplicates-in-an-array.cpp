class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> final;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                final.push_back(nums[i]);
            }
        }
        return final;
    }
};