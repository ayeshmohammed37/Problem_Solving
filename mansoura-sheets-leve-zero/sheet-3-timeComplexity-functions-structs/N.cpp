#include <bits/stdc++.h>

#define ll long long

using namespace std;

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}

void solve() {
   ll t;
   cin >> t;

   while (t--) {
      ll n;
      cin >> n;

      ll arr[n];
      ll cpy[n];
      for (ll i = 0; i < n; i++) cin >> arr[i];

      int turn = 1;
      int st = 0, ed = n-1;
      for (ll i = 0; i < n; i++) {
         if (turn == 1) {
            cpy[i] = arr[ed--];
            turn = 0;
         }
         else {
            cpy[i] = arr[st++];
            turn = 1;
         }
      }

      ll score = cpy[0];
      bool flag = true;
      for (ll i = 1; i < n; i++) {
         if (cpy[i] == score) {
            flag = false;
            break;
         }
         else {
            score += cpy[i];
         }
      }

      if (flag) {
         cout << "YES" << endl;
         for (ll i = 0; i < n; i++) cout << cpy[i] << " ";
         cout << endl;
      }
      else {
         cout << "NO" << endl;
      }


      
   }
}

int main() {

   Fast_IO();
   solve();
   
   return 0;
} 