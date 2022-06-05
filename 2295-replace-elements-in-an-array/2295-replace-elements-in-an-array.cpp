class Solution {
public:
        static bool sortByVal(const pair<int, int> &a, 
                   const pair<int, int> &b) 
    { 
        return (a.second < b.second); 
    } 
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        map<int,int> d;
        map<int,int> nums_d;
        for(int i=0;i<nums.size();i++){
            nums_d[nums[i]]=i;
        }
        for(int i=0;i<operations.size();i++){
            nums[nums_d[operations[i][0]]]=operations[i][1];
            nums_d[operations[i][1]] = nums_d[operations[i][0]];
        }

        return nums;
    }
};