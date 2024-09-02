    class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            
            int n=s.size();
            int maxx=0;
            map<char,int>mpp;
            int j=0;
            for(int i=0;i<n;i++){
                mpp[s[i]]++;
                while(mpp[s[i]]>1){
                    mpp[s[j]]--;
                    j++;
                }
                maxx=max(maxx,i-j+1);

            }
            return maxx;
        }
    };

