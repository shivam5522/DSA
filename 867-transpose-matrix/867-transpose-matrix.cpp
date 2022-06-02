class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> final;
        vector<int> temp;
        for(int i=0;i<matrix[0].size();i++){
            temp.clear();
            for(int j=0;j<matrix.size();j++){
                temp.push_back(matrix[j][i]);
            }
            final.push_back(temp);
        }
        return final;
    }
};