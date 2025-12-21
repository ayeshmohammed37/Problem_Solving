#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

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
      for (int i = 0; i < n; i++) cin >> a[i];

      int days = 0;
      for (int i = n-1, minPrice = a[i]; i >= 0; i--) {
         if (a[i] > minPrice) {
            days++;
         }
         else if (a[i] < minPrice) {
            minPrice = a[i];
         }
      }
      cout << days << endl;
   }
}
