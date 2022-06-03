class NumArray {
public:
    vector<int> cumsum;
    NumArray(vector<int>& nums) {
        int sum=0;
        for(auto i:nums){
            sum+=i;
            cumsum.push_back(sum);
        }
        for(auto i:cumsum){
            cout<<i<<endl;
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return cumsum[right];
        }
        else{
            return cumsum[right]-cumsum[left-1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */