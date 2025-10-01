#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int x = 0;
    while(n--){
        string k;
        cin >> k;
        if(k[0] == '+')
            ++x;
        if(k[0] == '-')
            --x;
        if(k[2] == '+')
            x++;
        if(k[2] == '-')
            x--;
    }
    cout << x << endl;
    return 0;
}