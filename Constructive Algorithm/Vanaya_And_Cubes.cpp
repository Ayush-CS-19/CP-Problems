#include<bits/stdc++.h>
using namespace std;
#define LL long long

int main(){
    LL n;
    cin >> n;
    LL ans = 0;
    LL level = 1;
    while(true){
        LL need = level * (level + 1) / 2;
        if(n >= need){
            n -= need;
            ans++;
            level++;
        }else
            break;
    }
    cout << ans << endl;
    return 0;
}