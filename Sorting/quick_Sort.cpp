class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low>=high) return;
        else{
            int p=partition(arr,low,high);
            quickSort(arr,low,p);
            quickSort(arr,p+1,high);
        }
    }
  public:
    int partition(vector<int>& arr, int low, int high) {
        // code here
        int pivot=arr[low];
        int i=low;
        int j=high;
        while(i<j){
            while(arr[i]<=pivot && i<high){
                i++;
            }
            while(arr[j]>=pivot && j>low){
                j--;
            }
             if(i<j){
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[j],arr[low]);
        return j;
    }
};
