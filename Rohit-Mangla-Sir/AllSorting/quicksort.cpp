#include<bits/stdc++.h>
using namespace std;

int calc(int left,int right,vector<int>&nums){
    int pivot=nums[left];
    int i=left+1;
    int j=right;
    while(i<=j){
        if(pivot>nums[i] && pivot<nums[j]){
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
void quicksort(int left,int right,vector<int>&nums){
    if(left<right){
        int pivot_index=calc(left,right,nums);
        quicksort(left,pivot_index-1,nums);
        quicksort(pivot_index+1,right,nums);
    }

}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i= 0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    cout<<"unsorted array is"<<endl;
    for(auto x:nums){
        cout<<x<<" ";
    }
    quicksort(0,n-1,nums);
    cout<<"sorted array is"<<endl;
    for(auto x:nums){
        cout<<x<<" ";
    }
}