class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        map<int,int> final;
        final[0]=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(final.count(sum-k)){
                count+=final[sum-k];
            }
            if(final.count(sum)){
                final[sum]++;
            }
            else{
                final[sum]=1;
            }
        }
    
    return count;
    }
};