class Solution {
public:
    int func(vector<int>& bloomDay, int mid,int k){
        int n=bloomDay.size();
        int cnt=0;
        int noofB=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid){
                cnt++;
            }
            else{
                noofB+=cnt/k;
                cnt=0;
                
            }
        }
        noofB+=cnt/k;
        return noofB;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int maxi=*max_element(bloomDay.begin(),bloomDay.end());
        int low=0;
        int high=maxi;
        int ans=-1;

        if((long long)m*k>n) return -1;
        while(low<=high){
            int mid=(low+high)>>1;
            if(func(bloomDay,mid,k)>=m){
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
