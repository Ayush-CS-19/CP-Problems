#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
    LL t;
    cin >> t;
    while(t--){
        LL a, b, n;
        cin >> a >> b >> n;
        LL ans = 0;
        while(a <= n && b <= n){
            if(a < b){
                a = a + b;
            }
            else{
                b = b + a;
            }
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}