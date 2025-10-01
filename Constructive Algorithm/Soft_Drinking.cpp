#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_liters = k * l;
    int need_one_liters = total_liters / nl;
    int total_limes = c * d;
    int need_salt = p / np;
    int ans = min({need_salt, need_one_liters,total_limes}) / n;
    cout << ans << " ";
    return 0;
}