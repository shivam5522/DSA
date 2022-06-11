class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long sum=0;
        long long count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        long long diff=sum-x;
        if(diff==0) return nums.size();
        long long currsum=0,i=0,j=0;
        while(j<nums.size()){
            currsum+=nums[j];
			
            while(i<nums.size()&&currsum>diff)
                currsum-=nums[i++];
				
            if(currsum==diff)
                count=max(count,j-i+1);
            j++;
        }
        if(count==0) return -1;
        return nums.size()-count;
    }
};