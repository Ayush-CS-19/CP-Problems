#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin>>t;

    while(t--){
        int n;

        cin>>n;

        vector<int>A(n, 0);

        vector<int>M(n, 0);

        for(int i = 0; i < n; i++)cin>>A[i];

        for(int i = 0; i < n; i++)cin>>M[i];

        int AO = 0;

        int MO = 0;

        for(auto i : A)if(i == 1)AO++;

        for(auto i : M)if(i == 1)MO++;
        if(AO % 2 == MO % 2){
            cout<<"Tie"<<endl;
            continue;
        }
        else{
        for(int i = n - 1; i >= 0; i--){
            if(A[i] != M[i]){
            if(i % 2 == 0){
                cout<<"Ajisai"<<endl;
            }
            else{
                cout<<"Mai"<<endl;
            }

            break;
        }
        }
    }
    }
    return 0;
}