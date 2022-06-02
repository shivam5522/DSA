class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=5001;
        for(auto i:nums){
            if(i<min){
                min=i;
            }
        }
        return min;
    }
};