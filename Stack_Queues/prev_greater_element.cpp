class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        //  code here
        stack<int>st;
        int n=arr.size();
        vector<int>pge(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[i]>=st.top()){
                st.pop();
            }
            if(st.empty()){
                pge[i]=-1;
            }
            else{
                pge[i]=st.top();
            }
            st.push(arr[i]);
        }
        return pge;
    }
};
