#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;

        cin>>n;

        vector<int>arr(n, 0);

        for(int i = 0; i < n; i++)cin>>arr[i];
        
        int a = arr[0];
        int b = arr[n - 1];
        if(a == -1 && b == -1){
            for(int i = 0; i < n; i++){
                if(arr[i] == -1)arr[i] = 0;
            }
        }
        else if(a == -1){
            arr[0] = b;
            for(int i = 1; i < n; i++){
                if(arr[i] == -1)arr[i] = 0;
            }
        }
        else if(b == -1){
            arr[n - 1] = a;
            for(int i = 0; i < n-1; i++){
                if(arr[i] == -1)arr[i] = 0;
            }
        }
        else{
            for(int i = 0; i < n; i++){
                if(arr[i] == -1)arr[i] = 0;
            }
        }
        cout<<abs(arr[n - 1] - arr[0])<<endl;
        for(auto i : arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}