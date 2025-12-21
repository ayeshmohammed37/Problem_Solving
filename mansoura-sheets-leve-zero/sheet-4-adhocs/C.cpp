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
   // memset(freq, 0, sizeof(freq));

   uint n; cin >> n;
   uint arr[n+1];
   uint freq[200'000 + 5] = {0};
   int ans = -1;
   for (uint i{1}; i <= n; i++) {
      cin >> arr[i];
      freq[arr[i]]++;
      if (freq[arr[i]] >= 3) {
         ans = static_cast<int>(arr[i]);
      }
   }
   cout << ans << endl;
}

int main() {

   Fast_IO();
   int t{1};
   cin >> t;
   while (t--) {
      solve();
   }
   
   return 0;
}