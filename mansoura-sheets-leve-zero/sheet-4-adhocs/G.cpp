#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}

void solve() {
   int k, n, q; cin >> n >> k >> q;
   int mx = 200'000 + 5;
   int freq[mx] = {0};
   int ok[mx] = {0};
   int prefixSum[mx] = {0};

   while (n--) {
      int l, r; cin >> l >> r;
      freq[l]++;
      freq[r+1]--;
   }
   
   for (int i{1}; i <= mx; i++) {
      freq[i] += freq[i-1];
   }

   for (int i{1}; i <= mx; i++) {
      if (freq[i] >= k) {
         ok[i] = 1;
      }
   }

   for (int i{1}; i <= mx; i++) {
      prefixSum[i] = ok[i] + prefixSum[i-1];
   }

   while (q--) {
      int a , b; cin >> a >> b;
      cout << prefixSum[b] - prefixSum[a-1] << endl;
   }
   
}

int main() {

   Fast_IO();
   int t{1};
   // cin >> t;
   while (t--) {
      solve();
   }
   
   return 0;
}