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
                a=i;
                b=dic[target-nums[i]];
                if(a!=b){
                break;
                }
            }
        }
        return {a,b};
    }
};