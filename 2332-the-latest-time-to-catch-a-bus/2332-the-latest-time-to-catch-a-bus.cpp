class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        queue<int> q;
        sort(buses.begin(),buses.end());
        sort(passengers.begin(),passengers.end());
        int n=buses.size();
        int m=passengers.size();
        set<int> st;
        for(auto p:passengers)
        {
            q.push(p);
            st.insert(p);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int currbus=buses[i]; 
            int count=0; 
            int x;
            while(!q.empty() && count<capacity && q.front()<=currbus)
            {
                x=q.front();
                q.pop();
                if(st.find(x-1)==st.end()) 
                    ans=x-1; 
                count++;
            }
            if(count<capacity)
            {
                while(st.find(currbus)!=st.end())
                {
                    currbus--;
                }
                ans=max(ans,currbus);
            }
            
        }
        return ans;
    }
};