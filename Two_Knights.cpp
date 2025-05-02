#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int k = 1; k <= n; k++) {
        int total = k * k * (k * k - 1) / 2;
        int attack = 4 * (k - 1) * (k - 2);
        cout << total - attack << endl;
    }

    return 0;
}
