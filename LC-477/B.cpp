#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0;i < n; i++)cin>>nums[i];
    map<pair<int,int>, int>mpp;
    mpp[{0, 0}] = -1;
    int diff = 0, XOR = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        XOR ^= nums[i];
        if(nums[i] % 2 != 0)diff += 1;
        else diff -= 1;
        pair<int,int>key = {XOR, diff};
        if(mpp.find(key) != mpp.end()){
            int len = i - mpp[key];
            ans = max(ans, len);
        }
        else{
            mpp[key] = i;
        }
    }
    cout<<ans<<endl;
    return 0;
}

// import java.util.*;

// record Pair(int diff, int xor){}

// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         int n = sc.nextInt();
//         int[] nums = new int[n];
//         for (int i = 0; i < n; i++) nums[i] = sc.nextInt();

//         Map<Pair, Integer> map = new HashMap<>();
//         map.put(new Pair(0, 0), -1);

//         int diff = 0;
//         int XOR = 0;
//         int ans = 0;

//         for (int i = 0; i < n; i++) {
//             XOR ^= nums[i];

//             if (nums[i] % 2 != 0)
//                 diff += 1;    // odd → +1
//             else
//                 diff -= 1;    // even → -1

//             Pair key = new Pair(XOR, diff);

//             if (map.containsKey(key)) {
//                 int len = i - map.get(key);
//                 ans = Math.max(ans, len);
//             } else {
//                 map.put(key, i);
//             }
//         }

//         System.out.println(ans);
//         sc.close();
//     }
// }
