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
   uint n, q; cin >> n >> q;
   uint arr[n+1];
   for (uint i{1}; i <= n; i++) {
      cin >> arr[i];
   }

   while (q--) {
      uint l, r, x; cin >> l >> r >> x;
      uint cnt{0};
      for (uint i{l}; i <= r; i++) {
         if (arr[i] == x) {
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