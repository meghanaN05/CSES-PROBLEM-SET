#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void moveDisk(int nD, vector<vector<int>>& moves, int ss, int ds, int ax) {
    if (nD == 1) {
        moves.push_back({ss, ds});
        return;
    }
    moveDisk(nD - 1, moves, ss, ax, ds);
    moves.push_back({ss, ds});
    moveDisk(nD - 1, moves, ax, ds, ss);
}

void towerofHanoi(int nD) {
    vector<vector<int>> moves;
    moveDisk(nD, moves, 1, 3, 2);
    cout << moves.size() << endl;
    for (auto move : moves) {
        cout << move[0] << " " << move[1] << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nD;
    cin >> nD;  
    towerofHanoi(nD);
    return 0;
}
