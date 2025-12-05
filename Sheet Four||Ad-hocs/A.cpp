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

uint arr[1'000'000 + 5];
uint freq[1'000'000 + 5] = {0};

void solve() {
   uint n, m; cin >> n >> m;
   
   for (uint i{1}; i <= n; i++) {
      cin >> arr[i];
      freq[arr[i]]++;
   }

   for (uint i{1}; i <= m; i++) {
      cout << freq[i] << endl;
   }
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