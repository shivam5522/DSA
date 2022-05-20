class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> t;
        for(int i=0;i<nums.size();i++){
            if(t.count(nums[i])){
                return true;
            }
            t[nums[i]]=i;
        }
        return false;
    }
};