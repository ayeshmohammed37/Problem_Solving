#include <bits/stdc++.h>
using namespace std;

void Fast_IO(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
   #endif
}


int main() {
   Fast_IO();

   int t; cin >> t;
   while (t--) {
      int n; cin >> n;

      vector<int> a(n);
      for (int i{0}; i < n; i++) cin >> a[i];
      sort(a.begin(), a.end());

      vector<int> b;
      for (int i{0}; i < n; i++) {
         if (i == 0 || a[i] != a[i-1]) {
            b.push_back(a[i]);
         }
      }

      for (int i{0}; i < n; i++) {
         if (i > 0 && a[i] == a[i-1]) {
            b.push_back(a[i]);
         }
      }

      for (const int& i : b) {
         cout << i << " ";
      }
      cout << endl;
   }
}
