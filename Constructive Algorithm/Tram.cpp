#include<bits/stdc++.h>
using namespace std;
#define LL long long

int main(){
    LL n;
    cin >> n;
    LL ans = 0;
    LL maxi = 0;
    for (LL i = 0; i < n; i++){
        LL a, b;
        cin >> a >> b;
        maxi = maxi - a;
        maxi = maxi + b;
        ans = max(ans, maxi);
    }
    cout << ans << endl;
    return 0;
}