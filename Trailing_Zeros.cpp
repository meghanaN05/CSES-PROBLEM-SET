#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;
    for (int p = 5; n / p > 0; p *= 5) {
        ans += n / p;
    }

    cout << ans << endl;
    return 0;
}
