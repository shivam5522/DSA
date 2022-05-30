class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> final;
        for(int i=0;i<nums.size();i++){
            final.push_back(nums[nums[i]]);
        }
        return final;
    }
};