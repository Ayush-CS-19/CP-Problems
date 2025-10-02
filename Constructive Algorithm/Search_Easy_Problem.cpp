#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main(){
    LL n;
    cin >> n;
    string ans = "EASY";
    for (LL i = 0; i < n; i++){
        LL k;
        cin >> k;
        if(k == 1){
            ans = "HARD";
        }
    }
    cout << ans << endl;
    return 0;
}