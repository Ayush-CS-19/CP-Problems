#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
    LL a, b;
    cin >> a >> b;
    LL ans = 0;
    while(a <= b){
        a = a * 3;
        b = b * 2;
        ans++;
    }
    cout << ans << endl;
    return 0;
}