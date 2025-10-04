#include<bits/stdc++.h>
using namespace std;
#define LL long long


int main(){
    string first;
    vector<string> arr(5);
    cin >> first;
    for (int i = 0; i < 5; i++)
        cin>>arr[i];
    bool check = false;
    for (int i = 0; i < 5; i++){
        if(first[0] == arr[i][0]){
            cout << "YES" << endl;
            check = true;
            break;
        }
        else if(first[1] == arr[i][1]){
            cout << "YES" << endl;
            check = true;
            break;
        }
    }
    if(check == false){
        cout << "NO" << endl;
    }
        return 0;
}