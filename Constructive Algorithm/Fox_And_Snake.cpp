#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    int alt = -1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(i % 2 != 0){
                if(alt == -1){
                    if(j == m - 1){
                        cout << "#";
                        alt = 1;
                    }
                    else{
                        cout << ".";
                    }
                }
                else{
                    if(j == 0){
                        cout << "#";
                    }
                    else{
                        cout << ".";
                        if(j == m - 1){
                            alt = -1;
                        }
                    }
                }
            }
            else{
                cout << "#";
            }
        }
        cout << endl;
    }
        return 0;
}