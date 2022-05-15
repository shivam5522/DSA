class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> t1;
        int count=0;
        for(int i=0;i<n;i++){
            if (nums[i]==0){
                count++;
            }
            else{
                t1.push_back(nums[i]);
            }
        }
        while(count!=0){
            t1.push_back(0);
            count--;
        }
        nums=t1;
    }
};