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
   ll arr[n+1];
   for (int i{1}; i <= n; i++) {
      cin >> arr[i];
   }

   for (int l{1}, r{n}; l < r; l++, r--){
      cout << arr[l] << " " << arr[r] << " "; 
   }
   if (n % 2 == 1) {
      cout << arr[n /2 + 1];
   }
   cout << endl;
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