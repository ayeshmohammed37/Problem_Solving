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
   int n; cin >> n;
   ull vals[n+1];
   ull prefix[n+1] = {0};
   ull prefix2[n+1] = {0};

   for (int i{1}; i <= n; i++) {
      cin >> vals[i];
      prefix[i] = vals[i] + prefix[i-1];
   }
   
   sort(vals+1, vals+n +1);
   for (int i{1}; i <= n; i++) {
      prefix2[i] = vals[i] + prefix2[i-1];
   }
   int m; cin >> m;
   while (m--) {
      int t, l, r; cin >> t >> l >> r;
      if (t == 1) {
         cout << (prefix[r] - prefix[l-1]) << endl;
      }
      else {
         cout << (prefix2[r] - prefix2[l-1]) << endl;
      }
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