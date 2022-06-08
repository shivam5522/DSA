class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> final;
        for(int i=1;i<=numRows;i++){
            if(i==1){
                final.push_back({1});
            }
            else if(i==2){
                final.push_back({1,1});
            }
            else{
                vector<int> temp;
                for(int j=1;j<=i;j++){
                    if(j==1 || j==i){
                        temp.push_back(1);
                    }
                    else{
                        temp.push_back(final[i-2][j-2]+final[i-2][j-1]);
                    }
                    cout<<j;
                }
                final.push_back(temp);
            }
        }
        return final;
    }
};