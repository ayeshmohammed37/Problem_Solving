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
   int oneCounter{0};
   int zeroCounter{0};
   char c;
   for (int i{0}; i < n; i++) {
      cin >> c;
      if (c == '1') {
         oneCounter++;
      }
      else {
         zeroCounter++;
      }
   }
   cout << abs(oneCounter - zeroCounter);
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