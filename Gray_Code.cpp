#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'



signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    
    int size = 1 << n;  
    for (int i = 0; i < size;i++) {
        int gray = i ^ (i >> 1);
        for (int j = n - 1; j >= 0; j--) {
            cout << ((gray >> j) & 1);
        }
        cout<<endl;
}
        
    
   

}