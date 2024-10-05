#include<bits/stdc++.h>
using namespace std;

int calc(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    while(i<=j){
        if(arr[i]>pivot && arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
            i--;
        }
        if(arr[i]<=pivot){
            i++;
        }
        if(arr[j]>=pivot){
            j--;
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quick_sort(int arr[],int low,int high){
    if(low<high){
        int pivot_index=calc(arr,low,high);
        quick_sort(arr,low,pivot_index-1);
        quick_sort(arr,pivot_index+1,high);
    }
}
int main(){
    int arr[5]={9,8,7,6,5};
    quick_sort(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}