#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int lowerBound(const vector<array<int,2>>& arr, int x) {
    int l = 0, r = arr.size();
    while (l < r) {
        int mid = (l + r) / 2;
        if (arr[mid][0] < x) l = mid + 1;
        else r = mid;
    }
    return l;
}

int upperBound(const vector<array<int,2>>& arr, int x) {
    int l = 0, r = arr.size();
    while (l < r) {
        int mid = (l + r) / 2;
        if (arr[mid][0] <= x) l = mid + 1;
        else r = mid;
    }
    return l;
}

class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();
        int q = queries.size();
        vector<int> ans(q, 0);

        // Build filtered string m (remove zeros)
        string m = "";
        for (char c : s) {
            if (c != '0') m.push_back(c);
        }

        int L = m.size();

        // prefix sum on original s
        vector<long long> prefixSum(n);
        prefixSum[0] = s[0] - '0';
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + (s[i] - '0');
        }

        // store indices of non-zero characters
        vector<array<int, 2>> arr;
        arr.reserve(n);
        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != '0') {
                arr.push_back({i, idx});
                idx++;
            }
        }

        // prefix modulo and powers of 10 for filtered string m
        vector<long long> pm(L), pow10(L);
        if (L > 0) {
            pm[0] = m[0] - '0';
            pow10[0] = 1;
        }
        for (int i = 1; i < L; i++) {
            pow10[i] = (pow10[i - 1] * 10) % mod;
            pm[i] = (pm[i - 1] * 10 + (m[i] - '0')) % mod;
        }

        // Process queries
        for (int i = 0; i < q; i++) {
            int x = queries[i][0];
            int y = queries[i][1];

            // sum of original digits
            long long sum = prefixSum[y] - (x > 0 ? prefixSum[x - 1] : 0);

            // binary search on arr
            int left = lowerBound(arr, x);
            int right = upperBound(arr, y);

            if (left >= right) {
                ans[i] = 0;
                continue;
            }

            // compute substring value m[left..right-1] mod
            long long val = 0;
            if (left == 0) {
                val = pm[right - 1];
            } else {
                val = (pm[right - 1] - (pm[left - 1] * pow10[right - left]) % mod + mod) % mod;
            }

            ans[i] = (val * sum) % mod;
        }

        return ans;
    }
};


// class Solution {
//     static int mod = 1000000007;

//     static int lowerBound(List<int[]> arr, int x) {
//         int l = 0, r = arr.size();
//         while (l < r) {
//             int mid = (l + r) / 2;
//             if (arr.get(mid)[0] < x) l = mid + 1;
//             else r = mid;
//         }
//         return l;
//     }

//     static int upperBound(List<int[]> arr, int x) {
//         int l = 0, r = arr.size();
//         while (l < r) {
//             int mid = (l + r) / 2;
//             if (arr.get(mid)[0] <= x) l = mid + 1;
//             else r = mid;
//         }
//         return l;
//     }

//     public int[] sumAndMultiply(String s, int[][] queries) {

//         int n = s.length();
//         int q = queries.length;

//         int[] ans = new int[q];

//         // Build filtered string m
//         StringBuilder m = new StringBuilder();
//         for(char c : s.toCharArray()) {
//             if(c != '0') m.append(c);
//         }

//         int L = m.length();

//         // prefix mod for original s
//         long[] prefixSum = new long[n];
//         prefixSum[0] = s.charAt(0) - '0';
//         for (int i = 1; i < n; i++)
//             prefixSum[i] = prefixSum[i - 1] + (s.charAt(i) - '0');

//         // store indices of non-zero digits in s
//         List<int[]> arr = new ArrayList<>();
//         int idx = 0;
//         for (int i = 0; i < n; i++) {
//             if (s.charAt(i) != '0') {
//                 arr.add(new int[]{i, idx});
//                 idx++;
//             }
//         }

//         // precompute prefix modulo for m
//         long[] pm = new long[L];
//         long[] pow10 = new long[L];
//         if (L > 0) {
//             pm[0] = m.charAt(0) - '0';
//             pow10[0] = 1;
//         }
        
//         for (int i = 1; i < L; i++) {
//             pow10[i] = (pow10[i - 1] * 10) % mod;
//             pm[i] = (pm[i - 1] * 10 + (m.charAt(i) - '0')) % mod;
//         }

//         // Answer each query
//         for (int i = 0; i < q; i++) {

//             int x = queries[i][0];
//             int y = queries[i][1];

//             long sum = prefixSum[y] - (x > 0 ? prefixSum[x - 1] : 0);

//             int left = lowerBound(arr, x);
//             int right = upperBound(arr, y);

//             if (left >= right) {
//                 ans[i] = 0;
//                 continue;
//             }

//             long val;

//             if (left == 0)
//                 val = pm[right - 1];
//             else {
//                 val = (pm[right - 1] - (pm[left - 1] * pow10[right - left]) % mod + mod) % mod;
//             }

//             ans[i] = (int)((val * sum) % mod);
//         }

//         return ans;
//     }
// }
