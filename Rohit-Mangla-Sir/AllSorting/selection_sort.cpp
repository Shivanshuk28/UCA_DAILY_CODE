#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={9,8,7,6,5};
    for(int i=0;i<5;i++){
        int mini=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[i]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}