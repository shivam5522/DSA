class Solution {
public:
    int merge(vector<int>& nums,int low,int mid,int high){
        int total=0;
        int j=mid+1;
        for(int i=low;i<=mid;i++){
            while (j <= high && nums[i] > 2LL * nums[j]) {
                j++;
            }
            total+=(j-(mid+1));
        }
        vector<int> t;
        int left = low, right = mid + 1;

      while (left <= mid && right <= high) {

        if (nums[left] <= nums[right]) {
          t.push_back(nums[left++]);
        } else {
          t.push_back(nums[right++]);
        }
      }

      while (left <= mid) {
        t.push_back(nums[left++]);
      }
      while (right <= high) {
        t.push_back(nums[right++]);
      }

      for (int i = low; i <= high; i++) {
        nums[i] = t[i - low];
      }
      return total;
        
    }
    int mergesort(vector<int>& nums,int low,int high){
        if(low>=high) return 0;
        int mid=(low+high)/2;
        int tot=mergesort(nums,low,mid);
        tot+=mergesort(nums,mid+1,high);
        tot+=merge(nums,low,mid,high);
        return tot;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};