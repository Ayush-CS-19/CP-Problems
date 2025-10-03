#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
    string k;
    cin >> k;
    if(k[0] >= 'a' && k[0] <= 'z'){
        int count = k[0] - 'a';
        k[0] = 'A' + count;
    }
    cout << k << endl;
    return 0;
}