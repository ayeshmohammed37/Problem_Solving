#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}

void solve() {
   int k, s;
   cin >> k  >> s;

   int cnt = 0;
   for (int x = 0; x <= k; x++) {
      for (int y = 0; y <= k; y++) {
         int z = s - x -y;
         if (z >= 0 && z <= k) {
            cnt++;
         }
      }
   }
   cout << cnt << endl;
}

int main() {

   Fast_IO();
   solve();
   
   return 0;
} 