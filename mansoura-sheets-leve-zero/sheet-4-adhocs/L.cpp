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
   int arr[n+1];
   int freq[n+1] = {0};

   for (int i = 1; i <= n; i++) {
      cin >> arr[i];
      freq[arr[i]]++;
   }

   if (arr[1] != n) {
      cout << "NO\n";
      return;
   }

   for (int i = n-1; i >= 1; i--) {
      freq[i] += freq[i+1];
   }

   for (int i = 1; i <= n; i++) {
      if (arr[i] != freq[i]) {
         cout << "NO\n";
         return;
      }
   }

   cout << "YES\n";
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