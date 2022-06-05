class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        int n=nums.size(),pre=0;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[pre]>k){
                count++;
                pre=i;
            }
        }
        return count+1;
    }
};