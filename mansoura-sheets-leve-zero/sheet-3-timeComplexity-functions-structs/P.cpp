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
      uint n; cin >> n;
      string path; cin >> path;

      uint coins{0};
      uint throns{0};
      for (uint i{0}; i < n; i++) {
         if (path[i] == '@') {
            coins++;
            throns = 0;
         }
         else if (path[i] == '*') {
            throns++;
         }
         else {
            throns = 0;
         }

         if (throns > 1) {
            break;
         } 
      }
      cout << coins << endl;
   }
}

int main() {

   Fast_IO();
   solve();
   
   return 0;
}