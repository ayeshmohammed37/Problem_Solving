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
   int n, m, x, y; cin >> n >> m >> x >> y;
   ll arr[n+1][m+1];
   ll prefix[n+1][m+1] = {0};

   for (int i{1}; i <= n; i++) {
      for (int j{1}; j <= m; j++) {
         cin >> arr[i][j];
         prefix[i][j] = arr[i][j] +  prefix[i][j-1];

      }
   }

   for (int i{1}; i <= n; i++) {
      for (int j{1}; j <= m; j++) {
         prefix[j][i] += prefix[j-1][i]; 
      }
   }

   ll maxBox{LLONG_MIN};
   for (int D{x}; D <= n; D++) {
      for (int R{y}; R <= m; R++) {
         ll currentBox = prefix[D][R] - prefix[D][R-y] - prefix[D-x][R] + prefix[D-x][R-y];
         maxBox = max(maxBox, currentBox);
      }
   }
   cout << maxBox;
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