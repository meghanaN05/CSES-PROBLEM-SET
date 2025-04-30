#include <bits/stdc++.h>
 
using namespace std;
#define int long long
#define endl '\n'
 
void solve() {
    int n,m;
    cin>>n>>m;
    if(n>=m){
        int ans;
        if(n%2==1){
          ans=(n-1)*(n-1)+1;
        }
        else{
            ans=n*n;
        }
        if(n%2==0){
            cout<<ans-m+1<<endl;;
        }
        else{
            cout<<ans+m-1<<endl;
        }
    }
    else{
        int ans;
        if(m%2==0){
            ans=(m-1)*(m-1)+1;
        }
        else{
            ans=m*m;
        }
        if(m%2==1){
            cout<<ans-n+1<<endl;;
        }
        else{
            cout<<ans+n-1<<endl;
        }
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int k;
    cin >> k;
 
    while (k--) {
        solve();
    }
 
    return 0;
 
}