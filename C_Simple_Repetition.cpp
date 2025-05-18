#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'
bool isprime(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    int x, k;
    cin >> x >> k;
    if (k > 1 && x > 1) {
        cout << "NO"<<endl;
    } else if (k == 1) {
        cout << (isprime(x) ? "YES" : "NO")<<endl;
    } else {
        cout << ((k == 2) ? "YES" : "NO")<<endl;
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