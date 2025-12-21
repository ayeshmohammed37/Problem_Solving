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

   set<int> save;
   set<int> reject;

   int n; cin >> n;
   int x;
   while (n--) {
      cin >> x;
      if (!save.count(x) && !reject.count(x)) {
         save.insert(x);
      }
      else {
         save.erase(x);
         reject.insert(x);
      }
   }
   cout << save.size();

}