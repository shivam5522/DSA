class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> final;
        int low=0;
        int high=nums.size()-1;
        int loc=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                loc=mid;
                break;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        if(loc==-1) return {-1,-1};
        low=loc;
        high=loc;
        int i=loc;
        while(i>=0){
            if(nums[i]==target) low=i;
            i--;
        }
        i=loc;
        while(i<nums.size()){
            if(nums[i]==target) high=i;
            i++;
        }
        return {low,high};
    }
};