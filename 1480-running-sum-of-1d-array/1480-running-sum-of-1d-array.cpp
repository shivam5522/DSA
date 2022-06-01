class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> final;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            final.push_back(sum);
        }
        return final;
    }
};