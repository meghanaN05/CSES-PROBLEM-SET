#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> vis(n, vector<int>(m, 0));

    // Input the grid
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < m; ++j) {
            a[i][j] = s[j] - '0';
        }
    }

    // Simulate row pushes from the left
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == 0) break;
            vis[i][j] = 1;
        }
    }

    // Simulate column pushes from the top
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            if (a[i][j] == 0) break;
            vis[i][j] = 1;
        }
    }

    // Check if all 1s in `a` are covered by at least one push
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == 1 && vis[i][j] == 0) {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
