#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;

    for (size_t i = 0; i < s.size(); ++i) {
        int d = s[i] - '0';
        if (i == 0 && d == 9) continue;
        int nd = 9 - d;
        if (nd < d) s[i] = char('0' + nd);
    }

    cout << s << '\n';
    return 0;
}
