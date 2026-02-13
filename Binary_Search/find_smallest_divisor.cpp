class Solution {
public:
    int func(vector<int>& nums,int mid){
        int n=nums.size();
        long cnt=0;
        for(int i=0;i<n;i++){
            cnt+=ceil((double)nums[i]/(double)mid);
        }
        return cnt;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int maxi=*max_element(nums.begin(),nums.end());
        int high=maxi;
        int ans=maxi;
        while(low<=high){
            int mid=(low+high)>>1;
            if(func(nums,mid)<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
