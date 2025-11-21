#include<bits/stdc++.h>
using namespace std;
void Solve(){
        int n;

        cin>>n;

        vector<int>A(n, 0);

        vector<int>M(n, 0);

        for(int i = 0; i < n; i++)cin>>A[i];

        for(int i = 0; i < n; i++)cin>>M[i];

        for(int k = 30; k >= 0; k--){
            int AO = 0, BO = 0;
            for(int i = 0; i < n; i++){
                if((A[i] & (1 << k)))AO++;
                if((M[i] & (1 << k)))BO++;
            }
            if(AO % 2 == BO % 2)continue;
            bool isCheck = true;
            for(int i = n - 1; i >= 0; i--){
                if((A[i] & (1 << k)) != (M[i] & (1 << k))){
                    if(i % 2 == 0){
                        cout<<"Ajisai"<<endl;
                    }
                    else{
                        cout<<"Mai"<<endl;
                    }
                    return;
                }
            }
        }
        cout<<"Tie"<<endl;
        return;
}
int main(){
    int t;

    cin>>t;

    while(t--){
        Solve();
    }
    return 0;
}