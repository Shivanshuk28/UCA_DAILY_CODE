
class Solution {
public:
    int calc(vector<int>& h,int n) {
        // int n=h.size();
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

    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxx=0;
        vector<vector<int>>prefix(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
            int sum=0;
            for(int i=0;i<n;i++){
                int val = matrix[i][j] - '0';
                sum+=val;
                if(matrix[i][j]=='0'){
                    sum=0;
                }
                prefix[i][j]=sum;
            }
        }

        for(int i=0;i<n;i++){
            maxx=max(calc(prefix[i],m),maxx);
        }
        return maxx;

        
    }
};