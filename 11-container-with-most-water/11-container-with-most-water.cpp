class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0;
        int start=0;
        int end=height.size()-1;
        while(start<end){
            int temp=min(height[start],height[end])*abs(start-end);
            water=max(water,temp);
            if(height[start]>=height[end]){
                end--;
            }
            else{
                start++;
            }
        }
        return water;
    }
};