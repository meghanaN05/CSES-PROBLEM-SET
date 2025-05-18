#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    sort(a.rbegin(), a.rend()); 

    int wins = 0;
    int used = 0;

    for (int i = 0; i < n; ++i) {
        int power = a[i];
        int team_size = (d + power) / power; 

        if (used + team_size <= n) {
            used += team_size;
            wins++;
        } else {
            break;
        }
    }

    cout << wins << '\n';
    return 0;
}
