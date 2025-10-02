#include<bits/stdc++.h>
using namespace std;
#define LL long long

int main(){
    string s;
    cin >> s;
    bool isCheck = true;
    for (int i = 0; i < s.size(); i++){
        if(s[i] != '4' && s[i] != '7'){
            isCheck = false;
            break;
        }
    }
        if (isCheck == false)
        {
            cout << "NO" << endl;
        }
        else{
        cout << "YES" << endl;
    }
    return 0;
}