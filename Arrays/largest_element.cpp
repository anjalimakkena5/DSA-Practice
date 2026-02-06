class Solution {
  public:
    int largest(vector<int> &arr) {
        //brute force tc=0(nlogn);
        /*
        int n=arr.size();
        sort(arr.begin(),arr.end());
        return arr[n-1];
        */
        //optimal
        int n=arr.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
};
