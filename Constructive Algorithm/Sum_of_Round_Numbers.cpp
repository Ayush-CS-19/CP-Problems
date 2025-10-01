#include<bits/stdc++.h>
using namespace std;


int main(){
    long long t;
    cin >> t;
    while(t--){
    long long n;
    cin >> n;
    vector<long long> ans;
    long long new_n = n;
    int i = 0;
    while(new_n > 0){
        long long rem = new_n % 10;
        new_n /= 10;
        if(rem == 0){
            i++;
            continue;
        }
        ans.push_back(rem * pow(10, i));
        i++;
    }
    cout << ans.size() << endl;
    for(auto i : ans){
        cout << i << " ";
    }
    }
    return 0;
}