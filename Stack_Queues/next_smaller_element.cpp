class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        int n=arr.size();
        stack<int>st;
        vector<int>nge(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]<=st.top()){
                st.pop();
            }
            if(st.empty()){
                nge[i]=-1; 
            }
            else{
                nge[i]=st.top();
            }
            st.push(arr[i]);
        }
        return nge;
    }
};
