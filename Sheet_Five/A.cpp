#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define uli unsigned long int
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
   
   vector<pair<int, int>> points(n);
   for (uli i{0}; i < points.size(); i++) {
      cin >> points[i].second >> points[i].first;
   }
   sort(points.rbegin(), points.rend());

   for (uli i{0}; i < points.size(); i++) {
      cout << points[i].second << " " << points[i].first << endl;
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