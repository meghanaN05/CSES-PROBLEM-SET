#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    map<int, int> diag_min;

   
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            int d = i - j;
            if (diag_min.find(d) == diag_min.end())
                diag_min[d] = a[i][j];
            else
                diag_min[d] = min(diag_min[d], a[i][j]);
        }

    int total_ops = 0;
    for (auto [d, min_val] : diag_min) {
        if (min_val < 0)
            total_ops += -min_val;  
    }

    cout << total_ops << '\n';
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