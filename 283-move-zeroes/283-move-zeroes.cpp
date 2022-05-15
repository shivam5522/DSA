class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int i=0;
        while(i!=nums.size()){
            if (nums[i]==0){
                nums.erase(nums.begin()+i);
                count++;
            }
            else{
                i++;
            }
        }
        while(count!=0){
            nums.push_back(0);
            count--;
        }
    }
};