class Solution {
public:
    long func(vector<int>&piles,int mid){
        int n=piles.size();
        long cnt=0;
        for(int i=0;i<n;i++){
            cnt+=ceil(double(piles[i])/double(mid));
        }
        return cnt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int n=piles.size();
        for(int i=0;i<n;i++){
            mini=min(piles[i],mini);
            maxi=max(piles[i],maxi);
        }
        int low=1;
        int high=maxi;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(func(piles,mid)<=h){
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
