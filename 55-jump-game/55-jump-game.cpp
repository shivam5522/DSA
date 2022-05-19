class Solution {
public:
    bool canJump(vector<int>& nums) {
        int fin=nums.size()-1;
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            if(sum<nums[i]){
            sum=nums[i];
            }
            cout<<sum;
            if(sum==0){
                return false;
            }
            if(sum>=fin-i){
                return true;
            }
            sum--;
            
        }
        return true;
    }
};