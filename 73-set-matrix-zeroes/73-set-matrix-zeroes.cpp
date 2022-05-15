class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        for(int row=0;row<rows;row++){
            for(int col=0;col<cols;col++){
                if(matrix[row][col]==0){
                    for(int i=0;i<matrix[row].size();i++){
                        if(matrix[row][i]!=0){
                        matrix[row][i]=-99999;
                        }
                    }
                    for(int i=0;i<matrix.size();i++){
                        if(matrix[i][col]!=0){
                        matrix[i][col]=-99999;
                        }
                    }
                }
            }
        }
        for(int row=0;row<matrix.size();row++){
            for(int col=0;col<matrix[row].size();col++){
                if(matrix[row][col]==-99999){
                    matrix[row][col]=0;
                }
            }
        }
    }
};