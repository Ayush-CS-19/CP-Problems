#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
    LL n;
    cin >> n;
    vector<LL> arr(n, 0);
    for (LL i = 0; i < n; i++)
        cin >> arr[i];
    LL ans = 1;
    LL count = 1;
    for (LL i = 0; i < n - 1; i++){
        if(arr[i] < arr[i + 1]){
            count++;
            ans = max(ans, count);
        }
        else{
            count = 1;
        }
    }
    cout << ans << endl;
    return 0;
}