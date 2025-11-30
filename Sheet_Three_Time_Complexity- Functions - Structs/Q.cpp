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
   uint t; cin >> t;

   while (t--) {
      ull n; cin >> n;
      ull a[n];
      ull pairs{0};
      for (ull j{0}; j < n; j++) {
         cin >> a[j];
         for (ull i{0}; i < j; i++) {
            if (a[j] - a[i] == j - i) {
               pairs++;
            }
         }
      }
      cout << pairs << endl;
   }
}

int main() {

   Fast_IO();
   solve();
   
   return 0;
}