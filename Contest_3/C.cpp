#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define uint unsigned int

using namespace std;

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}

void solve() {
   int t; cin >> t;

   while (t--) {
      int abc[3];
      for (int i{0}; i < 3; i++) {
         cin >> abc[i];
      }
      sort(abc, abc + 3, greater<int>());
      if (abc[0] + abc[1] >= 10) {
         cout << "YES" << endl;
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