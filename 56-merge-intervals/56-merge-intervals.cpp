class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> final;
        int f1=intervals[0][0],f2=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            int t1=intervals[i][0],t2=intervals[i][1];
            if(t1<=f2){
                if(t2>f2) f2=t2;
                if(t1<f1) f1=t1;
            }
            else{
                final.push_back({f1,f2});
                f1=t1;
                f2=t2;
            }
        }
        final.push_back({f1,f2});
        return final;
    }
};