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

   ll n, q; cin >> n >> q;
   map<string, ull> friends;
   
   string x;
   ull y;
   while (n--) {
      cin >> x >> y;
      friends[x] = y;
   }

   while (q--) {
      int op; cin >> op;
      string s;
      ull val;
      
      if (op == 1) {
         cin >> s >> val;
         friends[s] += val;
      }
      else {
         cin >> s;
         cout << friends[s] << endl;
      }
   }

}