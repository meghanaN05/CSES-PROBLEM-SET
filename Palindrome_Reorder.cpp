#include <bits/stdc++.h>
 
using namespace std;
#define int long long
#define endl '\n'
 
 
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin>>s;
    map<char,int>cc;
    for(auto c:s){
        cc[c]++;
    }
    int oc=0;
    for(auto[key,value]:cc){
        if(value%2)
        oc++;
    }
    if(oc>1) {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    string left;
    char middle='~';
    for(auto[key,value]:cc){
        for(int i=0;i<value/2;i++)
        left.push_back(key);
        if(value%2)
        middle=key;
    }
    string right=left;
    reverse(right.begin(),right.end());
    if(middle!='~')
    cout<<left+middle+right<<endl;
    else
    cout<<left+right<<endl;
 
    return 0;
 
}