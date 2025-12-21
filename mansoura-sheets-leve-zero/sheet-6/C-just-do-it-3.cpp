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

   set<ll> s;
   
   string op;
   ll x;
   ll q; cin >> q;
   while (q--) {
      cin >> op >> x;
      
      if(op == "lower_bound") {
         auto it = s.lower_bound(x);
         if (it != s.end()) {
            cout << *it << endl;
         }
         else {
            cout << -1 << endl;
         }
      }
      else if (op == "upper_bound") {
         auto it = s.upper_bound(x);
         if (it != s.end()) {
            cout << *it << endl;
         }
         else {
            cout << -1 << endl;
         }
      }
      else if (op == "find") {
         auto it = s.find(x);
         if (it != s.end()) {
            cout << "found" << endl;
         }
         else {
            cout << "not found" << endl;
         }
      }
      else {
         s.insert(x);
      }
   }

}