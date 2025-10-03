#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
    string k;
    cin >> k;
    LL count = 0;
    sort(k.begin(), k.end());
    for (int i = 0; i < k.size() - 1; i++){
        if(k[i] != k[i + 1]){
            count++;
        }
    }
    if(count % 2 != 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
        return 0;
}