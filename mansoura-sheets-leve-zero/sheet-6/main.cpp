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

   ll q; cin >> q;
   multiset<ll> ms;
   while (q--) {
      ll op; cin >> op;
      ll x;
      if (op == 1) {
         cin >> x;
         ms.insert(x);
      }
      else if (op == 2) {
         cin >> x;
         auto val = ms.find(x);
         if (val != ms.end()) {
            ms.erase(val);
         }
      }
      else {
         if (!ms.empty()) {
            cout << *(ms.begin()) << endl;
         }
         else {
            cout << "It is Just EMPTY\n";
         }
      }
   }

}