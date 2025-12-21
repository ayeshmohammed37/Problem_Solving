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
   int arr[100'000 + 5];
   ll preSum[100'000 + 5] = {0};

   for (int i{1}; i <= n; i++) {
      cin >> arr[i];
      preSum[i] = arr[i] + preSum[i-1];
   }
   
   int q; cin >> q;
   while (q--) {
      int l, r; cin >> l >> r;
      cout << (preSum[r] - preSum[l-1]) << endl;
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