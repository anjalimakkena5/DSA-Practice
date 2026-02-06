class Solution {
  public:
    int getSecondLargest(vector<int> &nums) {
        // code here
        int n=nums.size();
        int largest=-1;
        int slargest=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>largest){
                slargest=largest;
                largest=nums[i];
            }
            else if(nums[i]>slargest && nums[i]<largest){
                slargest=nums[i];
            }
        }
        return slargest; 
    }
};
