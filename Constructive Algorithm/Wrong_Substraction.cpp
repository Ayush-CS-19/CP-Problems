#include<bits/stdc++.h>
using namespace std;
#define LL long long

int main(){
    LL n;
    LL k;
    cin >> n >> k;
    while(k--){
        LL rem = n % 10;
        if(rem == 0){
            n = n / 10;
        }
        else{
            n = n - 1;
        }
    }
    cout << n << endl;
    return 0;
}