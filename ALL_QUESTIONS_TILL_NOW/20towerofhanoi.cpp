#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n, char from, char to, char aux){
    if(n==1){
        cout<<"move disk from "<<n<<" "<<from << " to "<< to<<endl;
        return;
    }
    towerofhanoi(n-1,from,aux,to);
    cout<<"move disk from "<<n<< " "<<from << " to "<< to<<endl;
    towerofhanoi(n-1,aux,to,from);
}
int main(){
    
    int n;
    cin>>n;
    towerofhanoi(n,'A','B','C');
}