#include <bits/stdc++.h>
 
using namespace std;
#define int long long
#define endl '\n'
 
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,m;
    cin>>n>>m;
    multiset<int>st;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        st.insert(a);
    }
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        if(st.empty()){
            cout<<"-1"<<endl;
            continue;
        }
        if(a<*st.begin()){
            cout<<-1<<endl;
            continue;
        }
        auto it=st.upper_bound(a);
        it--;
        cout<<*it<<endl;
        st.erase(it);
    }
 
 
    return 0;
 
}