#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n, x;
    cin >> n >> x;
    int bits = __builtin_popcountll(x);
    if (n <= bits)
    {
        cout << x<<endl;
        return;
    }
    if ((n - bits) % 2 == 0)
        cout << x + n - bits<<endl;
    else
    {
        if (x > 1)
        {
            cout << x + n - bits + 1<<endl;
            return;
        }
        if (x == 1)
        {
            cout << n + 3<<endl;
            return;
        }
        else
        {
            if (n == 1)
            {
                cout << -1<<endl;
                return;
            }
            else
                cout << n + 3<<endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    while (k--)
    {
        solve();
    }

    return 0;
}