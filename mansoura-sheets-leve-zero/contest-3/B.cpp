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
   int t;
   cin >> t;

   while (t--) {
      int x, y;
      cin >> x >> y;
      cout << ((y < x)? y : x) << " " << ((x > y)? x : y) << endl; 
   }
}

int main() {

   Fast_IO();
   solve();
   
   return 0;
}