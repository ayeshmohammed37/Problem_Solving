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
   
   int freq[200'000 + 5] = {0};
   for (int i{1}; i <= n; i++) {
      int l, r; cin >> l >> r;
      freq[l]++;
      freq[r+1] -= 1;
   }

   for (int i{1}; i <= 200'000; i++) {
      freq[i] += freq[i-1];
   }
   
   for (int i{1}; i <= q; i++) {
      int a, b; cin >> a >> b;
      int cnt{0};
      for (int j{a}; j <= b; j++) {
         if (freq[j] >= k) {
            cnt++;
         }
      }
      cout << cnt << endl;
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