class Solution {
public:
    vector<int>ps(vector<int>& heights){
    int n=heights.size();
    vector<int>ans;
    stack<int>st;
    
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && heights[st.top()]>=heights[i])
        {
            st.pop();
        }
            int ele=st.empty()?-1:st.top();
                ans.push_back(ele);
            st.push(i);
        
    }
        return ans;
    }
     vector<int>ns(vector<int>& heights){
    vector<int>ans;
    stack<int>st;
    int n=heights.size();
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && heights[st.top()]>=heights[i])
        {
            st.pop();
        }
            int ele=st.empty()?n:st.top();
                ans.push_back(ele);
            st.push(i);
        
    }
         reverse(ans.begin(),ans.end());
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int res=0;
        vector<int>ps_result = ps(heights);
        vector<int>ns_result = ns(heights);
        int n = heights.size();
        for (int i = 0; i < n; i++) {
            int curr = (ns_result[i] - ps_result[i] - 1) * heights[i];
            res = max(res, curr); }
        
  return res;  }
};