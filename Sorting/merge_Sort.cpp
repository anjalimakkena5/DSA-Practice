class Solution {
  public:
   void merge(vector<int>&arr,int low,int mid,int high){
       int left=low;
       int right=mid+1;
       vector<int>temp;
       while(left<=mid && right<=high){
           if(arr[left]<=arr[right]){
               temp.push_back(arr[left]);
               left++;
           }
           else{
               temp.push_back(arr[right]);
               right++;
           }
       }
       while(left<=mid){
           temp.push_back(arr[left]);
           left++;
       }
       while(right<=high){
           temp.push_back(arr[right]);
           right++;
       }
       for(int i=low;i<=high;i++){
           arr[i]=temp[i-low];
       }
   }
   void mergesort(vector<int>& arr, int l, int r){
       if(l>=r) return;
       else{
           int mid=(l+r)/2;
           mergesort(arr,l,mid);
           mergesort(arr,mid+1,r);
           merge(arr,l,mid,r);
       }
   }
    void mergeSort(vector<int>& arr, int l, int r) {
        
        int low=l;
        int high=r;
        mergesort(arr,low,high);
    }
};

