#include<bits/stdc++.h>
using namespace std;


void merging(vector<int>&arr,vector<int>&aux,int low,int mid,int high){
    for(int k=low;k<=high;k++){
        aux[k]=arr[k];
    }
    int i=low;
    int j=mid+1;
    for(int k=low;k<=high;k++){
        if(i>mid)arr[k]=aux[j++];
        else if(j>high)arr[k]=aux[i++];
        else if(arr[i]<=arr[j])arr[k]=aux[i++];
        else arr[k]=aux[j++];
    }
}

void merge_sort(vector<int>&arr,vector<int>&aux,int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        merge_sort(arr,aux,low,mid);
        merge_sort(arr,aux,mid+1,high); 
        merging(arr,aux,low,mid,high);
    }
}

int main(){
    vector<int>arr{9,8,7,6,5};
    int n=arr.size();
    vector<int>aux(n);
    merge_sort(arr,aux,0,n-1);
    for(auto x:arr){
        cout<<x<<" ";
    }
}