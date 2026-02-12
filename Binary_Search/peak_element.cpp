class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=0;
        if(n==1) return 0;
        while(low<high){
            int mid=(low+high)>>1;
            if(nums[mid]>=nums[mid+1]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
