
class Solution {
  public:
    bool func(vector<int> &stalls, int k,int dist){
        int cows=1;
        int last=stalls[0];
        int n=stalls.size();
        for(int i=1;i<n;i++){
            if((stalls[i]-last)>=dist){
                cows++;
                last=stalls[i];
            }
            if(cows>=k) return true;
        }
        
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int low=0;
        int high=stalls[n-1]-stalls[0];
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(func(stalls,k,mid)==true){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};
