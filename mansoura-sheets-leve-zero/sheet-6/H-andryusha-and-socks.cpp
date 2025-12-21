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

   int n; cin >> n;
   n *= 2;
   int x;
   set<int> s;
   size_t ans = 0;
   while (n--) {
      cin >> x;
      auto it = s.find(x);
      if (it != s.end()) {
         s.erase(it);
      }
      else {
         s.insert(x);
         ans = max(ans, s.size());
      }
   }
   cout << ans << endl;

}