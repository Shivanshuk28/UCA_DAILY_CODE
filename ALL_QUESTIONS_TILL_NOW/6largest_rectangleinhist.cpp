class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        stack<int>stk;
        int maxx=0;
        for(int i=0;i<n;i++){
            while(!stk.empty() && h[stk.top()]>=h[i]){
                int element=h[stk.top()];
                stk.pop();
                int nse=i;
                int pse=stk.empty()?-1:stk.top();
                maxx=max(maxx,(nse-pse-1)*element);
                
            }
            stk.push(i);
        }
        while(!stk.empty()){
            int nse=n;
            int element=h[stk.top()];
            stk.pop();
            int pse=stk.empty()?-1:stk.top();
            maxx=max(maxx,(nse-pse-1)*element);
        }
        return maxx;
    }
};