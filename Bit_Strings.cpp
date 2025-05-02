#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'
const int MOD = 1000000007;

int modpow(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << modpow(2, n, MOD) << endl;

    return 0;
}
