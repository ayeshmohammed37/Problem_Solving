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

ll arr[1005][1005];
ll pre[1005][1005] = {0};
ll prebox[1005][1005] = {0};

void solve() {
   uint n, m, x, y; cin >> n >> m >> x >> y;
   for (uint i{1}; i <= n; i++) {
      for (uint j{1}; j <= m; j++) {
         cin >> arr[i][j];
         pre[i][j] += arr[i][j] + pre[i][j-1];
         prebox[i][j] = pre[i][j] + prebox[i-1][j];
      }
   }

   // ll maxbox = LLONG_MIN;

   for (uint d{x}; d <= n; d++) {
      for (uint r{y}; r <= m; r++) {
         uint l = r-y+1;
         uint u = d-x+1;
         ll box = prebox[d][r] - prebox[u-1][y] - prebox[d][l-1]  + prebox[u-1][l-1];
         cout <<"(" << d << ", " << r << ") = " <<box << endl;
         // maxbox = max(box, maxbox);
         // maxbox = (maxbox > box)? maxbox : box;
      }
   }
   // cout << maxbox;
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