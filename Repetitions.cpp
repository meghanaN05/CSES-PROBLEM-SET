#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int max_len = 1, curr_len = 1;

    for (size_t i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            curr_len++;
        } else {
            curr_len = 1;
        }
        max_len = max(max_len, curr_len);
    }

    cout << max_len << '\n';
    return 0;
}
