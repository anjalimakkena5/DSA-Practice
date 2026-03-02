class Solution {
  public:
    int findPages(vector<int> &nums, int m) {
        // code here
        if(m>nums.size()) return -1;
         int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            if(func(nums,mid)<=m){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }  
        return low;  
        
    }
    int func(vector<int>&nums,int mid){
        int pages=0;
        int stu=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]+pages<=mid){
                pages+=nums[i];
            }
            else{
                pages=nums[i];
                stu++;
            }
        }
        return stu;
    }
};


