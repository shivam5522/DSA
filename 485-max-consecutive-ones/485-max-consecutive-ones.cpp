class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int final=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                final=max(final,count);
                count=0;
            }
        }
        final=max(final,count);
        return final;
    }
};