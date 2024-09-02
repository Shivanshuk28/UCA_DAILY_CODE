#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,vector<string>>mpp;
    vector<string>str {"abc", "bcd", "acef", "xyz", "az", "ba", "a", "z"};
    for(auto x:str){
        string pattern="";
        for(int i=1;i<x.size();i++){
            int pp=x[i]-x[i-1];
            if(pp<0){
                pp+=26;
            }
            pattern+=to_string(pp);
            
        }
        mpp[pattern].push_back(x);
    }
    for(auto x:mpp){
        cout<<x.first<<": ";
        for(auto z:x.second){
            cout<<z<<" ";
        }
        cout<<endl;
    }
}