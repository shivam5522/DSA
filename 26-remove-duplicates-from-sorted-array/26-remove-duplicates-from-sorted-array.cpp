class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr=0;
        int temp=0;
        for(int j=1;j<nums.size();j++){
            if(nums[curr]!=nums[j]){
                curr++;
                nums[curr]=nums[j];
            }
        }
        return curr+1;
        
    }       
};