class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int final=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(final==nums[i]){
                final++;
            }
        }
        return final;
    }
    
};