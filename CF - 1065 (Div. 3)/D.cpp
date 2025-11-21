#include<bits/stdc++.h>
using namespace std;

// OBSERVATION
// FOR TREE THERE SHOULD ONLY ONE CONNECTED COMPONENT
// WE USE DSU TO CHECK 
// IF IN P[j] (WHERE j < i)  is smaller than P[i] THEN WE CAN MAKE A EDGE FROM P[i] to P[j].

vector<int>parent;

vector<int>R;

int sizet = 2e5 + 10;

int find(int x){
    if(x == parent[x])return x;
    return parent[x] = find(parent[x]);
}
void make(int v){
    parent[v] = v;
    R[v] = 1;
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a != b){
        if(R[a] < R[b]) swap(a, b);
        parent[b] = a;
        R[a] += R[b];
    }
}

void Solve(){
    int n;
    
    cin>>n;

    vector<int>arr(n, 0);
    
    R.resize(sizet,1);

    parent.resize(sizet,0);

    for(int i = 0; i < n; i++)cin>>arr[i];

    for(int i = 0; i < n; i++)make(arr[i]);
    
    int prefix = arr[0];
    for(int i = 1; i < n; i++){
        if(prefix < arr[i]){
            Union(prefix, arr[i]);
        }
        else{
            prefix = arr[i];
        }
    }

    int suff = 0, curr = 0, prev = 0;

    for(int i = n - 1; i >= 0; i--){
        if(find(arr[i]) != prev){
            suff = max(suff, curr);
            prev = find(arr[i]);
        }
        if(suff > arr[i]){
            if(find(suff) != find(arr[i])){
                Union(suff, arr[i]);
            }
        }
        curr = max(curr, arr[i]);
    }
    bool flag = 1;
    for(int i = 1; i < n; i++){
        if(find(arr[i]) != find(arr[0])){
            flag = 0;
        }
    }
    if(flag == 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
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