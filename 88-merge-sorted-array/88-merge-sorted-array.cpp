class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        int temp=n;
        while(temp!=0){
            nums1.pop_back();
            temp--;
        }
        while(j!=n){
            if(i>nums1.size()){
                nums1.push_back(nums2[j]);
                j++;
            }
            else{
            if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                nums1.insert(nums1.begin()+i,nums2[j]);
                i++;
                j++;
            }
            }
            
        }
    }
};