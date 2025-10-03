#include<bits/stdc++.h>
using namespace std;
#define LL long long

int main(){
    int one = 0, two = 0, three = 0;
    string s;
    cin >> s;
    string k;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '1')
            one++;
        if(s[i] == '2')
            two++;
        if(s[i] == '3'){
            three++;
        }
    }
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '1' || s[i] == '2' || s[i] == '3'){
            if(one != 0){
                s[i] = '1';
                one--;
            }
            else if(two != 0){
                s[i] = '2';
                two--;
            }
            else{
                s[i] = '3';
                three--;
            }
        }
    }
    cout << s << endl;
    return 0;
}