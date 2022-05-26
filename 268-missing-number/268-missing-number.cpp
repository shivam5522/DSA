class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int t_sum=0;
        for(int i=0;i<n;i++){
            t_sum+=nums[i];
        }
        return sum-t_sum;
    }
};