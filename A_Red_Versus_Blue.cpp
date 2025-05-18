#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

signed main()
{
    int _ = 1;
    cin >> _;
    while (_--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        int p = r / (b + 1), q = r % (b + 1);
        for (int i = 0; i < q; i++)
            cout << string(p + 1, 'R') << 'B';
        for (int i = q; i < b; i++)
            cout << string(p, 'R') << 'B';
        cout << string(p, 'R');
        cout << endl;
    }
    return 0;
}
