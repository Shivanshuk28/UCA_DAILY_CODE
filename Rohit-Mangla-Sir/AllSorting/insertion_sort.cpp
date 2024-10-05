#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={9,8,7,6,5};
    for(int i=0;i<5;i++){
        int j=i;
        while(j!=0){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
            j--;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}