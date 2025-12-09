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
   ll n, k; cin >> n >> k;

   ll arr[n+2];
   ll t[n+2];
   ll prefix[n+2] = {0};

   for (ll i{1}; i <= n; i++) {
      cin >> arr[i];
   }

   ll sum{0};
   for (ll i{1}; i <= n; i++) {
      cin >> t[i];
      if (t[i]) {
         sum += arr[i];
      }
   }

   for (ll i{1}; i <= n; i++) {
      prefix[i] += prefix[i-1];
      if (!(t[i])) {
         prefix[i] += arr[i];
      }
   }

   ll maxSum{0};
   for (ll i{k}; i <= n; i++) {
      ll r = i;
      ll l = r - k + 1;
      maxSum = max(maxSum, prefix[r] - prefix[l-1]);
   }
   cout << maxSum + sum << endl;
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