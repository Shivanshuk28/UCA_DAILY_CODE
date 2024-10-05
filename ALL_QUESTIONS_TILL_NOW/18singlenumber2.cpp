class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int k=0;k<32;k++){
            int temp=(1<<k);
            int countz=0;
            int counto=0;
            for(auto num:nums){
                if((temp&num)==0){
                    countz++;
                }
                else{
                    counto++;
                }
            }
            if(counto%3==1){
                ans=(ans|temp);
            }
        }
        return ans;
    }
}; 