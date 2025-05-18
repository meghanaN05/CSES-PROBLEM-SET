#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    a.push_back(-1e9);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (a.back() == x)
            ;
        else
            a.push_back(x);
    }
    a.push_back(-1e9);

    int ans = 0;
    for (int i = 1; i < a.size() - 1; i++)
        if (a[i - 1] < a[i] && a[i] > a[i + 1])
            ans++;

    cout << ans << endl;
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