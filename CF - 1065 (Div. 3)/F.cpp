#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        stack<int> s;
        vector<pair<int, int>> edges;
        for (int i = n - 1; i >= 0; --i) {
            if (s.empty() || s.top() < a[i])
                s.push(a[i]);
            else {
                int big = s.top();
                while (!s.empty() && s.top() > a[i]) {
                    edges.emplace_back(a[i], s.top());
                    s.pop();
                }
                s.push(big);
            }
        }
        if (s.size() > 1)
            cout << "NO" << '\n';
        else {
            cout << "YES" << '\n';
            for (auto [v, u] : edges)
                cout << v << " " << u << '\n';
        }
    }
}