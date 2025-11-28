#include <bits/stdc++.h>

using namespace std;

void Fast_IO(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}

void solve() {
   int t;
   cin >> t;

   while (t--) {
      int n;
      cin >> n;

      long long arr[n];

      for (int i = 0; i < n; i++) {
         cin >> arr[i];
      }

      bool flag = false;
      for (int i = 0; i < n; i++) {
         for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
               flag = true;
         }
      }
      cout << ((flag)? "NO" : "YES") << endl;
   }
}

int main() {

    Fast_IO();
    solve();
     
    return 0;
} 