class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        int pre=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[pre]>k){
                count++;
                pre=i;
            }
        }
        return count+1;
    }
};