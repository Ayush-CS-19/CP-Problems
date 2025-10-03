#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
    LL k, n, w;
    cin >> k >> n >> w;
    LL total = 0;
    for (int i = 1; i <= w; i++){
        total += (i * k);
    }
    if(total <= n){
        cout << 0 << endl;
    }
    else{
        cout << total - n << endl;
    }
    return 0;
}