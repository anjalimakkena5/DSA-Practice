class Solution {
public:
    int func(vector<int>& nums, int mid){
        int n=nums.size();
        int cnt=0,days=1;
        for(int i=0;i<n;i++){
            if(cnt+nums[i]>mid){
                days++;
                cnt=nums[i];
            }
            else{
                cnt+=nums[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        int high=sum;
        int ans=high;
        while(low<=high){
            int mid=(low+high)>>1;
            if(func(weights,mid)<=days){
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
