class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> temp;
        for(int i=0;i<nums.size();i++){
            if(temp.count(nums[i])){
                temp[nums[i]]+=1;
            }
            else{
                temp[nums[i]]=1;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(temp[nums[i]]==1){
                return nums[i];
            }
        }
        return 0;
    }
};