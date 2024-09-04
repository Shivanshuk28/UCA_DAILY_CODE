#include<bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n,char from, char to, char via  ){
    if(n==1){
        cout<<"move disk "<<n<< " from rod"<< from << " to rod "<< to<<endl;
        return;
    }
    tower_of_hanoi(n-1,from, via,to);
    cout<<"move disk from "<<n<< " from rod"<< from << " to rod "<< to<<endl;
    tower_of_hanoi(n-1,via,to ,from);
    

}
int main(){
    int n;
    cin>>n;
    tower_of_hanoi(n,'A','B','C');
}