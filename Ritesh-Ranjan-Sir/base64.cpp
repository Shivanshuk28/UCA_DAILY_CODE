#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char>arr={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
                'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
                'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
                'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                'w', 'x', 'y', 'z', '0', '1', '2', '3',
                '4', '5', '6', '7', '8', '9', '+', '/'};
    string s="MNOP";
    string bit_string="";
    for(auto x:s){
        // int val=x-'Null';
        // cout<<x<<" bye";
        bit_string+=bitset<8>(x).to_string();
        // bit_string+=" ";
    }
    cout<<bit_string<<endl;
    while(bit_string.length()%6!=0){
        bit_string+='0';
    }
    cout<<bit_string<<endl;


    string encoded_version="";
    for(int i=0;i<bit_string.size();i+=6){
        string six_bits=bit_string.substr(i,6);
        int to_encode=stoi(six_bits,0,2);
        encoded_version+=arr[to_encode];
    }
    while (encoded_version.size() % 4 != 0) {
        encoded_version += '=';
    }
    cout << "Encoded Base64 string: " << encoded_version << endl;
    return 0;
}