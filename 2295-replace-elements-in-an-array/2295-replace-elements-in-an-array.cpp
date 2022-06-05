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
            int temp=nums_d[operations[i][0]];
            nums_d.erase(operations[i][0]);
            nums_d[operations[i][1]]=temp;
        }
        	vector<pair<int, int>> vec;

          map<int, int> :: iterator it2;
          for (it2=nums_d.begin(); it2!=nums_d.end(); it2++) 
          {
            vec.push_back(make_pair(it2->first, it2->second));
          }

            // // sort the vector by increasing order of its pair's second value
        vector<int> final;
          sort(vec.begin(), vec.end(), sortByVal); 
        
            for (int i = 0; i < vec.size(); i++)
	{
		final.push_back(vec[i].first);
            }

        return final;
    }
};