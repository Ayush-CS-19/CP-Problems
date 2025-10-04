#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
    LL t;
    cin >> t;
    while(t--){
        string k;
        cin >> k;

        LL left = -1, right = -1, ans = 0;

        for (int i = 0; i < k.size(); i++) {
            if (k[i] == '1') {
                left = i;
                break;
            }
        }
        for (int j = k.size() - 1; j >= 0; j--) {
            if (k[j] == '1') {
                right = j;
                break;
            }
        }

        if (left == -1 || right == -1 || left >= right) {
            cout << 0 << "\n";
            continue;
        }

        for (int i = left; i < right; i++) {
            if (k[i] == '0') ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}