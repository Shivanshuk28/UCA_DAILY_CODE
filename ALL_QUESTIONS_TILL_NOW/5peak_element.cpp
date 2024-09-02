class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        while(left<right-1){
            int mid=(left+right)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])return mid;
            if(nums[mid]<nums[mid+1]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return nums[left] > nums[right] ? left : right;
    }
};