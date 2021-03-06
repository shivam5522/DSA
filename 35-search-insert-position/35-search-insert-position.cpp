class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        if(target>nums[mid]) return mid+1;
        else return mid;
    }
};