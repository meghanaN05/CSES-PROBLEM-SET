#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a, b;
    cin >> a >> b;
    
    int total = a + b;

    if (total % 3 != 0 || min(a, b) * 2 < max(a, b)) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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
