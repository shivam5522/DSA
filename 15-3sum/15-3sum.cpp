class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() < 3){
            return {};
        }
        if(nums[0] > 0){
            return {};
        }
        map<int,int> temp;
        vector<vector <int>> final;
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]=i;
        }
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]>0){
                break;
            }
            for(int j=i+1;j<nums.size()-1;j++){
                int check=-(nums[i]+nums[j]);
                if(temp.count(check) && temp[check]>j){
                    final.push_back({nums[i],nums[j],check});
                }
                j=temp[nums[j]];
            }
            i=temp[nums[i]];
        }
        return final;
    }
};