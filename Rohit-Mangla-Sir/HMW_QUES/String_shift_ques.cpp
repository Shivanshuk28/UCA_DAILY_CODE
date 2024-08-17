// Perform the following shift operations on a string:

// Right shift: Replace every letter with the successive letter of the English alphabet, where 'z' is replaced by 'a'. For example, "abc" can be right-shifted to "bcd" or "xyz" can be right-shifted to "yza".
// Left shift: Replace every letter with the preceding letter of the English alphabet, where 'a' is replaced by 'z'. For example, "bcd" can be left-shifted to "abc" or "yza" can be left-shifted to "xyz".


// We can keep shifting the string in both directions to form an endless shifting sequence.
// For example, shift "abc" to form the sequence: ... <-> "abc" <-> "bcd" <-> ... <-> "xyz" <-> "yza" <-> .... <-> "zab" <-> "abc" <-> …
// You are given an array of strings strings, group together all strings[i] that belong to the same shifting sequence. You may return the answer in any order.

// Example 1:

// Input: strings = ["abc","bcd","acef","xyz","az","ba","a","z"]

// Output: [["acef"],["a","z"],["abc","bcd","xyz"],["az","ba"]]

// Example 2:

// Input: strings = ["a"] Output: [["a"]]


// Constraints:

// 1 <= strings.length <= 200
// 1 <= strings[i].length <= 50
// strings[i] consists of lowercase English letters.

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>sq={"abc","bcd","acef","xyz","az","ba","a","z"};
    // map<int,vector<string>>mpp;
    // for(int i=0;i<s.size();i++){
    //     int s_size=s[i].size();
    //     string ss=s[i];
    //     mpp[s_size].push_back(ss);
    // }

    unordered_map<string, vector<string>> g;
        for (auto& s : sq) {
            string t;
            int diff = s[0] - 'a';
            for (int i = 0; i < s.size(); ++i) {
                char c = s[i] - diff;
                if (c < 'a') {
                    c += 26;
                }
                t.push_back(c);
            }
            g[t].emplace_back(s);
        }

    for(auto x:g){
        for(auto xx:x.second){
            cout<<xx<<" ";
        }
        cout<<endl;
    }
}