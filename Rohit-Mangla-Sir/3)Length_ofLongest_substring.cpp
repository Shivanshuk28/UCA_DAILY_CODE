#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // length of longest substring with at most 2 distinct characters
    int i=0,j=0;
    int max_length = 0;
    int dist_count = 0;
    set<char> distinct_chars;
    string str = "abcabcbb";
    for(i=0; i<str.length(); i++){
        distinct_chars.insert(str[i]);
        if(distinct_chars.size() <= 2){
            max_length = max(max_length, i-j+1);
        }
        else{
            distinct_chars.erase(str[j-max_length+1]);
            j++;
        }
    }
    cout << "Length of longest substring with at most 2 distinct characters: " << max_length << endl;
    return 0;

}