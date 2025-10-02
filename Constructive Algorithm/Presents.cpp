#include<bits/stdc++.h>
using namespace std;
#define LL long long

int main(){
//    1 2 3 4
//    2 3 4 1
//    4 1 2 3
LL n;
cin >> n;
vector<LL> ans(n + 1, 0);
for (int i = 0; i < n; i++){
    LL temp;
    cin >> temp;
    ans[temp] = i + 1;
}
for (int i = 1; i <= n; i++){
    cout << ans[i] << " ";
}
    return 0;
}