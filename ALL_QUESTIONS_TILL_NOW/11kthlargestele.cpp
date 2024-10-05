class Solution {
public:
int calc(int left,int right,vector<int>&nums){
    int i=left+1;
    int j=right;
    int pivot=nums[left];
    while(i<=j){
        if(nums[i]<pivot && nums[j]>pivot){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        if(nums[i]>=pivot){
            i++;
        }
        if(nums[j]<=pivot){
            j--;
        }
    }
    swap(nums[j],nums[left]);
    return j;
}
    int findKthLargest(vector<int>& nums, int k) {
        int left=0;
        int right=nums.size()-1;
        int pivot_index=0;
        while(true){
            pivot_index=calc(left,right,nums);
            if(pivot_index==k-1){
                return nums[pivot_index];
            }
            else if(pivot_index>k-1){
                right=pivot_index-1;
            }
            else{
                left=pivot_index+1;
            }
        }
    }
};