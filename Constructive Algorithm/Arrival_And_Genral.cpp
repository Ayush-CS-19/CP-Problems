#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
    LL n;
    LL maxi = INT_MIN;
    LL mini = INT_MAX;
    LL mini_idx = 0;
    LL maxi_idx = 0;
    cin >> n;
    for (LL i = 0; i < n; i++){
        LL temp;
        cin >> temp;
        if (maxi < temp)
        {
            maxi = temp;
            maxi_idx = i;
        }
    if(mini >= temp){
        mini = temp;
        mini_idx = i;
    }
    }
    if(maxi_idx > mini_idx){
        mini_idx++;
    }
    LL ans = (maxi_idx) + (n - mini_idx - 1);
    cout << ans << endl;
    return 0;
}