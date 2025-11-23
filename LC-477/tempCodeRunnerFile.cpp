#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

int main() {
    string s;
    cin >> s;

    int n;
    cin >> n;

    vector<vector<int>> queries(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        cin >> queries[i][0] >> queries[i][1];
    }

    int len = s.size();
    string m = "";
    for(auto i : s){
        if(i != 0){
            m += i;
        }
    }

    vector<long long> prefixSum(len, 0);
    prefixSum[0] = (s[0] - '0');
    for (int i = 1; i < len; i++) {
        prefixSum[i] = prefixSum[i - 1] + (s[i] - '0');
    }


    vector<vector<int>> arr;   
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] != '0') {
            arr.push_back({i, j});
            j++;
        }
    }

    for (int i = 0; i < n; i++) {
        int x = queries[i][0];
        int y = queries[i][1];

   
        long long sum = prefixSum[y] - (x > 0 ? prefixSum[x - 1] : 0);

        int left = lower_bound(
            arr.begin(), arr.end(),
            x,
            [](const vector<int>& a, int val) {
                return a[0] < val;
            }
        ) - arr.begin();

        int right = upper_bound(
            arr.begin(), arr.end(),
            y,
            [](int val, const vector<int>& a) {
                return val < a[0];
            }
        ) - arr.begin();

        string k = m.substr(left, right - left);
        
        cout <<stoi(k) * sum<< endl;
    }

    return 0;
}
