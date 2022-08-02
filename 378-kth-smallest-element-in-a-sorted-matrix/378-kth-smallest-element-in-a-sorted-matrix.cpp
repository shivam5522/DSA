class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> temp;
        for(auto row:matrix){
            for(auto val:row) temp.push_back(val);
        }
        sort(temp.begin(),temp.end());
        return temp[k-1];
    }
};