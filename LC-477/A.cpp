#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string k = to_string(n);
    string m = "";
    for(int i = 0; i < k.size(); i++){
        if(k[i] != '0'){
            m += k[i];
        }
    }
    int sum = 0;
    for(auto i : m){
        sum += (i - '0');
    }
    int ans = stoi(m) * sum;
    cout<<ans<<endl; 
    return 0;
}

// import java.util.*;

// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//         int n = sc.nextInt();
//         String k = Integer.toString(n);
        
//         StringBuilder m = new StringBuilder();
//         for (int i = 0; i < k.length(); i++) {
//             if (k.charAt(i) != '0') {
//                 m.append(k.charAt(i));
//             }
//         }
        
//         long sum = 0;
//         for (int i = 0; i < m.length(); i++) {
//             sum += (m.charAt(i) - '0');
//         }
        
//         long ans = Long.parseLong(m.toString()) * sum;
//         System.out.println(ans);
        
//         sc.close();
//     }
// }