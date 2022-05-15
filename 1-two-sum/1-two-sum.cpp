class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> dic;
        int a; int b;
        for(int i=0;i<nums.size();i++){
            dic[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(dic.find(target-nums[i])!=dic.end()){
                int temp=dic[target-nums[i]];
                if(i!=temp){
                    return{i,temp};
                }
            }
        }
        return {0,0};
    }
};