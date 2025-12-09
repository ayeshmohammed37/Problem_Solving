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
   int n, k; cin >> n >> k;
   int h[n+1] = {0};
   int pre[n+1] = {0};

   for (int i{1}; i <= n; i++) {
      cin >> h[i];
      pre[i] = h[i] + pre[i-1];
   }

   int minimal = INT_MAX;
   int index = -1;
   for (int i{k}; i <= n; i++) {
      int r = i;
      int l = r - k + 1;
      if (pre[r] - pre[l-1] <= minimal) {
         minimal = pre[r] - pre[l-1];
         index = l;
      }
   }
   cout << index << endl;
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