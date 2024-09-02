class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int num=target-nums[i];
            if(mpp.find(num)!=mpp.end() && mpp[num] != i){
                return {i,mpp[num]};
            }
        }
        return {};
    }
};