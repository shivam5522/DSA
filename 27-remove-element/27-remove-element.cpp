class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            // cout<<left<<" "<<right<<endl;
            if(nums[left]!=val){
                left++;
            }
            else if(nums[left]!=val && nums[right]!=val){
                left++;
            }
            else if(nums[left]==val && nums[right]!=val){
                swap(nums[left],nums[right]);
                left++;
                right--;
            }
            else{
                right--;
            }
        }
        return left;
    }
};