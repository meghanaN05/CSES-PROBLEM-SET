#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int k;
    cin>>k;
    vector<int>a(k);
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    int original=k-2;
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if(a[i]*a[j]==original){
                cout<<a[i]<< ' '<<a[j]<<endl;
                return ;
            }
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;

}