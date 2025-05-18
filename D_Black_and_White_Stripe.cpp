#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int current_white = 0;
    for (int i = 0; i < k; ++i) {
        if (s[i] == 'W') current_white++;
    }

    int min_white = current_white;

    for (int i = k; i < n; ++i) {
        if (s[i - k] == 'W') current_white--; 
        if (s[i] == 'W') current_white++;      
        min_white = min(min_white, current_white);
    }

    cout << min_white << endl;
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
